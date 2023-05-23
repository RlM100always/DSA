#include<bits/stdc++.h>
using namespace std ;
#define SPEED ios_base::sync_with_stdio(false) cin.tie(false);

class MinHeap{

    int *heap_array;
    int capacity; 
    int heap_size; 

public:

    MinHeap(int capacity){
        this->heap_size = 0;
        this->capacity = capacity;
        this->heap_array=new int[capacity]; 
    }


    void MinHeapify(int i){
       
        int l = left(i);
        int r = right(i);

        int smallest = i;
        if (l < heap_size && heap_array[l] < heap_array[i])
            smallest = l;
        if (r < heap_size && heap_array[r] < heap_array[smallest])
            smallest = r;

        if (smallest != i){
            swap(heap_array[i], heap_array[smallest]);
            MinHeapify(smallest);
        }
    }
    int parent(int i)
    { 
        return (i-1)/2; 
    }

    int left(int i)
    { 
        return (2*i + 1);
    }

    int right(int i){ 
        return (2*i + 2);
    }

    int extractMin(){
        if (heap_size <= 0)
            return INT_MAX;
        if (heap_size == 1){
            heap_size--;
            return heap_array[0];
        }
        int root = heap_array[0];
        heap_array[0] = heap_array[heap_size-1];
        heap_size--;
        MinHeapify(0);

        return root;
    }

    
    void decreaseKey(int i, int new_val){
        heap_array[i] = new_val;
        while (i != 0 && heap_array[parent(i)] > heap_array[i]){
            swap(heap_array[i], heap_array[parent(i)]);
            i = parent(i);
        }
    }

    int getMin(){
         return heap_array[0]; 
    }

    void deleteKey(int i){
        decreaseKey(i, INT_MIN);
        extractMin();
    }

    
    void insertKey(int value){
        if (heap_size == capacity){
            cout << "\nOverflow\n";
            return;
        }
        int i = heap_size;
        heap_array[heap_size++] = value;

        while (i != 0 && heap_array[parent(i)] > heap_array[i]){
            swap(heap_array[i], heap_array[parent(i)]);
            i = parent(i);
        }
    }

    void printHeapArray(){
        //cout<<heap_size<<endl ;
        for(int i=0 ;i<heap_size ;i++){
            cout<<heap_array[i]<<" ";
        }
        cout<<"\n";
    }
};

int main()
{
    
    freopen("input.txt" ,"r",stdin);
    freopen("output.txt" ,"w",stdout);
    MinHeap obj(10);

    obj.insertKey(11);
    obj.insertKey(13);
    obj.insertKey(3);
    obj.insertKey(16);
    obj.insertKey(45);
    obj.insertKey(0);
    obj.insertKey(43);
    obj.printHeapArray();

    obj.deleteKey(1);
    obj.printHeapArray();
    cout << "minimum element: " << obj.extractMin() << endl;
    obj.printHeapArray();
    cout << "After extract minimum element: " << obj.getMin() << endl;

    obj.decreaseKey(3,-32);
    obj.printHeapArray();
    return 0 ;
}