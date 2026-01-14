# Train Ticket Booking System (C)

## 📌 Project Overview
This is a **console-based Train Ticket Booking System** developed using the **C programming language**.  
The project simulates a real-world ticket booking process by **verifying user credentials and payment details using text files**, and then **generating a PNR** for successful bookings.

The project was originally developed on **OnlineGDB** and later migrated to **GitHub**.

---

## ⚙️ Features
- User email verification
- Password authentication
- Payment verification using:
  - UPI ID
  - Card number
  - CVV
- Validation using file-based data storage
- Ticket booking after successful verification
- Automatic **PNR generation**
- Storage of booking details in a file
- Modular design using multiple `.c` and `.h` files

---

## 🗂️ File-Based Authentication System
This project uses **text files as a simple database** for validation.

### Input Files (Dummy Data Only)
- `gmail.txt` → stores registered email IDs  
- `password.txt` → stores corresponding passwords  
- `upi.txt` → stores valid UPI IDs  
- `cardno.txt` → stores valid card numbers  
- `cvv.txt` → stores valid CVV numbers  

> ⚠️ **Note:**  
> All data stored in these files is **dummy data used only for demonstration and learning purposes**.  
> No real or sensitive information is included.

---

## 📄 Output File
- `pnr.txt`
  - Stores generated **PNR numbers**
  - Stores user booking details after successful ticket booking

---

Authors--
Swaroop
Srujan
Hemanth
Karthikeya
