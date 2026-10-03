# Queue-Using-Linked-List
Repository DescriptionQueue Using Linked List is a C++ program that implements a queue data structure using a singly linked list. It demonstrates basic queue operations such as Enqueue, Dequeue, and Display following the FIFO (First In, First Out) principle.



problem statement:
Hospitals face significant challenges in managing patient queues efficiently. Static data structures (like standard fixed-size arrays) lead to memory waste or queue overflow when patient intake spikes suddenly. Traditional manual or fixed systems fail to handle real-time queue additions, processing patients on a First-In, First-Out (FIFO) basis, and dynamic cancellations effectively.
This project implements a dynamic Hospital Patient Waiting Queue Management System using a Singly Linked List in C/C++. It dynamically allocates memory for each patient, ensuring zero memory overflow and optimal dynamic space management.

2. Objectives
Dynamic Memory Allocation: Store patient details without fixed queue size restrictions using pointers.
FIFO Processing: Ensure fairness by serving patients in the exact order of their arrival.
Real-time Queue Operations: Allow registration, appointment discharge, search, and queue display seamlessly.
Time & Space Efficiency: Achieve O(1) constant time complexity for enqueuing and dequeuing operations using front and rear pointers.

3. Data Structure Design
Node Structure
Each node represents an individual patient in the queue:
struct PatientNode {
    int patientID;
    string name;
    int age;
    string condition;
    PatientNode* next; // Pointer to the next patient in line
};

4. Key Queue Operations
## Objectives
1. Implement dynamic memory allocation with zero queue overflow.
2. Achieve efficient $O(1)$ Enqueue and Dequeue operations.
3. Serve patients in strict order of arrival (FIFO basis).
4. Provide real-time patient registration and consultation processing.
5. Search patient status in line using a unique Patient ID.
6. Display current waiting queue status in real time.

5. System Algorithms
Algorithm 1: Enqueue (Register New Patient)
Allocate memory for a new node newNode.
Input patient details (ID, Name, Age, Condition).
Set newNode->next = NULL.
If rear == NULL (Queue is empty):
Set front = newNode
Set rear = newNode
Else (Queue is not empty):
Set rear->next = newNode
Set rear = newNode
Display confirmation message.
Algorithm 2: Dequeue (Doctor Consults Patient)
Check if front == NULL. If true, print "Queue is empty" and exit.
Create a temporary pointer temp = front.
Move the front pointer forward: front = front->next.
If front == NULL, set rear = NULL (Queue becomes empty).
Display served patient details.
Free memory using delete temp or free(temp).

6. Project Setup & Execution
Prerequisites
GCC/G++ Compiler or IDE (VS Code, Code::Blocks)
Build & Run
# Clone the repository
git clone https://github.com/your-username/hospital-queue-linkedlist.git

# Navigate to project folder
cd hospital-queue-linkedlist

# Compile code
g++ main.cpp -o hospital_queue

# Run application
./hospital_queue

