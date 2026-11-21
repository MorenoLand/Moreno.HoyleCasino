; FUN_0045aa80  0045aa80
0045aa80  PUSH EBP
0045aa81  MOV EBP,ESP
0045aa83  PUSH -0x1
0045aa85  PUSH 0x69f1eb
0045aa8a  MOV EAX,FS:[0x0]
0045aa90  PUSH EAX
0045aa91  PUSH ECX
0045aa92  MOV EAX,[0x00781870]
0045aa97  XOR EAX,EBP
0045aa99  PUSH EAX
0045aa9a  LEA EAX,[EBP + -0xc]
0045aa9d  MOV FS:[0x0],EAX
0045aaa3  MOV dword ptr [EBP + -0x10],ECX
0045aaa6  MOV EAX,dword ptr [EBP + 0xc]
0045aaa9  PUSH EAX
0045aaaa  MOV ECX,dword ptr [EBP + -0x10]
0045aaad  CALL 0x005fc0d0
0045aab2  MOV dword ptr [EBP + -0x4],0x0
0045aab9  MOV ECX,dword ptr [EBP + -0x10]
0045aabc  MOV dword ptr [ECX],0x6b99d0
0045aac2  MOV EDX,dword ptr [EBP + -0x10]
0045aac5  MOV EAX,dword ptr [EBP + 0x8]
0045aac8  MOV dword ptr [EDX + 0x20],EAX
0045aacb  MOV ECX,dword ptr [EBP + 0x8]
0045aace  MOV EDX,dword ptr [ECX*0x4 + 0x71748c]
0045aad5  PUSH EDX
0045aad6  MOV EAX,[0x00790740]
0045aadb  MOV ECX,dword ptr [EAX + 0x44]
0045aade  CALL 0x005eaf00
0045aae3  MOV ECX,dword ptr [EBP + 0x8]
0045aae6  MOV EDX,dword ptr [ECX*0x4 + 0x717478]
0045aaed  PUSH EDX
0045aaee  MOV EAX,[0x00790740]
0045aaf3  MOV ECX,dword ptr [EAX + 0x40]
0045aaf6  CALL 0x005eaf00
0045aafb  PUSH 0x0
0045aafd  MOV ECX,dword ptr [0x00790740]
0045ab03  MOV EDX,dword ptr [ECX + 0x44]
0045ab06  MOV EAX,[0x00790740]
0045ab0b  MOV ECX,dword ptr [EAX + 0x44]
0045ab0e  MOV EDX,dword ptr [EDX]
0045ab10  MOV EAX,dword ptr [EDX + 0xb0]
0045ab16  CALL EAX
0045ab18  PUSH 0x0
0045ab1a  MOV ECX,dword ptr [0x00790740]
0045ab20  MOV EDX,dword ptr [ECX + 0x40]
0045ab23  MOV EAX,[0x00790740]
0045ab28  MOV ECX,dword ptr [EAX + 0x40]
0045ab2b  MOV EDX,dword ptr [EDX]
0045ab2d  MOV EAX,dword ptr [EDX + 0xb0]
0045ab33  CALL EAX
0045ab35  MOV dword ptr [EBP + -0x4],0xffffffff
0045ab3c  MOV EAX,dword ptr [EBP + -0x10]
0045ab3f  MOV ECX,dword ptr [EBP + -0xc]
0045ab42  MOV dword ptr FS:[0x0],ECX
0045ab49  POP ECX
0045ab4a  MOV ESP,EBP
0045ab4c  POP EBP
0045ab4d  RET 0x8
