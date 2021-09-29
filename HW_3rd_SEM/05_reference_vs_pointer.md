
 # Difference in Reference variable and pointer variable :-


### A reference is same object, just with a different name and reference must refer to an object. Since references can’t be NULL, they are safer to use.


- __1.__ A pointer can be re-assigned while reference cannot, and must be assigned at initialization only. 
 
    
- **2.** Pointer can be assigned NULL directly, whereas reference cannot.
    
- **3.** Pointers can iterate over an array, we can use increment/decrement operators to go to the next/previous item that a pointer is pointing to. 
 
    
- **4.** A pointer is a variable that holds a memory address. A reference has the same memory address as the item it references.
    
- **5.** A pointer to a class/struct uses ‘->'(arrow operator) to access it’s members whereas a reference uses a ‘.'(dot operator)
    
- **6.** A pointer needs to be dereferenced with * to access the memory location it points to, whereas a reference can be used directly.
