cmake_minimum_required(VERSION 3.19)
project(ExerciseProgram4_InvoiceClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(ExerciseProgram4_InvoiceClass main.cpp Invoice.h Invoice.cpp CInvoicePersonDate.cpp CInvoicePersonDate.h)