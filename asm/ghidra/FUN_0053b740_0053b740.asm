; FUN_0053b740  0053b740
0053b740  PUSH EBP
0053b741  MOV EBP,ESP
0053b743  SUB ESP,0xc
0053b746  MOV dword ptr [EBP + -0xc],ECX
0053b749  MOV EAX,dword ptr [EBP + 0x8]
0053b74c  MOV ECX,dword ptr [EBP + -0xc]
0053b74f  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
0053b753  MOV EAX,dword ptr [EBP + 0xc]
0053b756  MOV ECX,dword ptr [EDX + EAX*0x4 + 0x8]
0053b75a  MOV dword ptr [EBP + -0x4],ECX
0053b75d  MOV EDX,dword ptr [EBP + 0xc]
0053b760  PUSH EDX
0053b761  MOV EAX,dword ptr [EBP + 0x8]
0053b764  PUSH EAX
0053b765  MOV ECX,dword ptr [0x007933ec]
0053b76b  CALL 0x00540ba0
0053b770  MOV word ptr [EBP + -0x8],AX
0053b774  MOV ECX,dword ptr [EBP + 0x8]
0053b777  PUSH ECX
0053b778  MOV ECX,dword ptr [EBP + -0xc]
0053b77b  CALL 0x0053b810
0053b780  PUSH EAX
0053b781  MOV ECX,dword ptr [EBP + -0x4]
0053b784  CALL 0x005eaf00
0053b789  MOV DX,word ptr [EBP + -0x8]
0053b78d  PUSH EDX
0053b78e  MOV EAX,dword ptr [EBP + 0x8]
0053b791  PUSH EAX
0053b792  MOV ECX,dword ptr [EBP + -0xc]
0053b795  CALL 0x0053b850
0053b79a  PUSH EAX
0053b79b  MOV ECX,dword ptr [EBP + -0x4]
0053b79e  MOV EDX,dword ptr [ECX]
0053b7a0  MOV ECX,dword ptr [EBP + -0x4]
0053b7a3  MOV EAX,dword ptr [EDX + 0xb0]
0053b7a9  CALL EAX
0053b7ab  MOV ECX,dword ptr [EBP + 0xc]
0053b7ae  PUSH ECX
0053b7af  MOV EDX,dword ptr [EBP + 0x8]
0053b7b2  PUSH EDX
0053b7b3  MOV ECX,dword ptr [EBP + -0xc]
0053b7b6  CALL 0x0053b930
0053b7bb  PUSH EAX
0053b7bc  MOV EAX,dword ptr [EBP + 0xc]
0053b7bf  PUSH EAX
0053b7c0  MOV ECX,dword ptr [EBP + 0x8]
0053b7c3  PUSH ECX
0053b7c4  MOV ECX,dword ptr [EBP + -0xc]
0053b7c7  CALL 0x0053b8f0
0053b7cc  PUSH EAX
0053b7cd  MOV EDX,dword ptr [EBP + -0x4]
0053b7d0  MOV EAX,dword ptr [EDX]
0053b7d2  MOV ECX,dword ptr [EBP + -0x4]
0053b7d5  MOV EDX,dword ptr [EAX + 0x44]
0053b7d8  CALL EDX
0053b7da  MOV EAX,dword ptr [EBP + 0xc]
0053b7dd  ADD EAX,0x5
0053b7e0  PUSH EAX
0053b7e1  MOV ECX,dword ptr [EBP + -0x4]
0053b7e4  MOV EDX,dword ptr [ECX]
0053b7e6  MOV ECX,dword ptr [EBP + -0x4]
0053b7e9  MOV EAX,dword ptr [EDX + 0x6c]
0053b7ec  CALL EAX
0053b7ee  MOV ECX,dword ptr [EBP + -0x4]
0053b7f1  MOV EDX,dword ptr [ECX]
0053b7f3  MOV ECX,dword ptr [EBP + -0x4]
0053b7f6  MOV EAX,dword ptr [EDX + 0x74]
0053b7f9  CALL EAX
0053b7fb  MOV ESP,EBP
0053b7fd  POP EBP
0053b7fe  RET 0x8
