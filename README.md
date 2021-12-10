![](https://i.postimg.cc/8PhGrMsZ/KDBLogo.png)

# KDB
 A Fundamental Basic Key-Value Database Management System.
 
 Project Status: ⚠️ Conceptual ⚠️
 
 This project does not currently have functional code to accomplish the goals of the repo.
 
 ## Features:
 
 - **RAM Caching** - All database entries are loaded, updated and handled in memory during run-time, which provides minimal latency when communicating with applications.
 - **Binary Storage** - All data upon saving is stored in binary format files which provide a luxury of being compact, making large databases less impactful on storage space.
 - **Bare-metal TCP Communication** - All data over the network is transferred using ASIO (Boost-less), a low-level networking API without unnecessary bloat. 
 - **Simple Commands** - All Commands (Operation Codes) are 3-letter Acronyms like GET, PSH, DEL, CRT, SEL

## Progress

 - [ ] Creating Command Handler to understand arguments and validate expressions
 - [ ] Database Creation Logic
 - [ ] Database Data Logic (Updating Data, Deleting Data, Creating New Data)
 - [ ] Type Safety and Sanitation of Input
 - [ ] Database Saving to Hard Storage
 - [ ] TCP Networking
 - [ ] Authentication
 - [ ] Quick Exports and Imports
 

