# Extendible-Hashing-DB-System

## Project Overview

This project demonstrates my expertise in database development through the implementation of a system for managing files using extendible hashing. The assignment focused on understanding the internal workings of database systems, particularly at the block and record management levels. This project was completed as part of the course "K18 - Υλοποίηση Συστημάτων Βάσεων Δεδομένων" during the Winter Semester of 2021-2022.

## Key Technical Achievements

- **Extendible Hash Table Implementation**: Developed functions to manage files based on extendible hashing, enhancing database performance through efficient indexing.
- **Block-Level Management**: Leveraged a provided block management library to handle memory management, ensuring efficient access and storage of data blocks.
- **Record Management**: Implemented functions to manage records within the hash table, demonstrating the ability to handle dynamic data operations.
- **Index Handling**: Created indices on records to improve database query performance, demonstrating an understanding of optimizing data retrieval.

## Project Details

### Extendible Hash Table Functions

- **HT_Init()**: Initializes necessary structures for extendible hashing.
- **HT_CreateIndex(const char *fileName, int depth)**: Creates and initializes an empty extendible hash table file.
- **HT_OpenIndex(const char *fileName, int *indexDesc)**: Opens an existing extendible hash table file.
- **HT_CloseFile(int indexDesc)**: Closes an open extendible hash table file.
- **HT_InsertEntry(int indexDesc, Record record)**: Inserts a new record into the extendible hash table.

### Block Management

- **BF_Init(ReplacementAlgorithm repl_alg)**: Initializes the block management layer with a specified replacement algorithm (LRU or MRU).
- **BF_CreateFile(const char* filename)**: Creates a new block-based file.
- **BF_OpenFile(const char* filename, int *file_desc)**: Opens an existing block-based file.
- **BF_CloseFile(int file_desc)**: Closes an open block-based file.
- **BF_AllocateBlock(int file_desc, BF_Block *block)**: Allocates a new block in the file.
- **BF_GetBlock(int file_desc, int block_num, BF_Block *block)**: Retrieves a block from the file.
- **BF_UnpinBlock(BF_Block *block)**: Unpins a block from memory, allowing it to be written back to disk if necessary.

## How to Run

- 1. **Clone the Repository**: 
   ```sh
   git clone https://github.com/your-username/Extendible-Hashing-DB-System.git
   cd Extendible-Hashing-DB-System

- 2. **Build the project**:
    ```sh
    make ht
  
- 3. **Run the examples**:
    ```sh
    ./build/runner

