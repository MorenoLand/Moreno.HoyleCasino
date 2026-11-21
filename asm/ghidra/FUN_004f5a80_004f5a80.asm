; FUN_004f5a80  004f5a80
004f5a80  PUSH EBP
004f5a81  MOV EBP,ESP
004f5a83  SUB ESP,0x8
004f5a86  MOV dword ptr [EBP + -0x8],ECX
004f5a89  MOV EAX,dword ptr [EBP + -0x8]
004f5a8c  MOVZX ECX,byte ptr [EAX + 0x1]
004f5a90  TEST ECX,ECX
004f5a92  JNZ 0x004f5aab
004f5a94  PUSH 0x180
004f5a99  PUSH 0x6bfe08
004f5a9e  PUSH 0x6bfe6c
004f5aa3  CALL 0x005e9f20
004f5aa8  ADD ESP,0xc
004f5aab  MOV EAX,dword ptr [EBP + -0x8]
004f5aae  MOVZX ECX,byte ptr [EAX]
004f5ab1  TEST ECX,ECX
004f5ab3  JNZ 0x004f5acc
004f5ab5  PUSH 0x181
004f5aba  PUSH 0x6bfe08
004f5abf  PUSH 0x6c0020
004f5ac4  CALL 0x005e9f20
004f5ac9  ADD ESP,0xc
004f5acc  MOV ECX,dword ptr [EBP + -0x8]
004f5acf  CALL 0x004f9110
004f5ad4  MOVSX EAX,AX
004f5ad7  CMP EAX,0x2
004f5ada  JGE 0x004f5af3
004f5adc  PUSH 0x182
004f5ae1  PUSH 0x6bfe08
004f5ae6  PUSH 0x6bfe7c
004f5aeb  CALL 0x005e9f20
004f5af0  ADD ESP,0xc
004f5af3  CMP dword ptr [EBP + 0x8],0x0
004f5af7  JG 0x004f5b10
004f5af9  PUSH 0x183
004f5afe  PUSH 0x6bfe08
004f5b03  PUSH 0x6c0038
004f5b08  CALL 0x005e9f20
004f5b0d  ADD ESP,0xc
004f5b10  MOV ECX,dword ptr [EBP + -0x8]
004f5b13  CALL 0x004f6640
004f5b18  MOVZX EAX,AL
004f5b1b  TEST EAX,EAX
004f5b1d  JNZ 0x004f5b36
004f5b1f  PUSH 0x184
004f5b24  PUSH 0x6bfe08
004f5b29  PUSH 0x6c0008
004f5b2e  CALL 0x005e9f20
004f5b33  ADD ESP,0xc
004f5b36  MOV EDX,dword ptr [EBP + -0x8]
004f5b39  MOVSX EAX,word ptr [EDX + 0x8]
004f5b3d  MOV ECX,dword ptr [EBP + -0x8]
004f5b40  MOV EDX,dword ptr [ECX + 0x4c]
004f5b43  MOV ECX,dword ptr [EBP + -0x8]
004f5b46  MOV CX,word ptr [ECX + 0x2c]
004f5b4a  MOV word ptr [EDX + EAX*0x2],CX
004f5b4e  MOV EDX,dword ptr [EBP + -0x8]
004f5b51  MOV AX,word ptr [EDX + 0x2c]
004f5b55  ADD AX,0x1
004f5b59  MOV ECX,dword ptr [EBP + -0x8]
004f5b5c  MOV word ptr [ECX + 0x2c],AX
004f5b60  MOV EDX,dword ptr [EBP + -0x8]
004f5b63  MOVSX EAX,word ptr [EDX + 0x8]
004f5b67  MOV ECX,dword ptr [EBP + -0x8]
004f5b6a  MOV EDX,dword ptr [ECX + 0x5c]
004f5b6d  MOV AX,word ptr [EDX + EAX*0x2]
004f5b71  ADD AX,0x1
004f5b75  MOV ECX,dword ptr [EBP + -0x8]
004f5b78  MOVSX EDX,word ptr [ECX + 0x8]
004f5b7c  MOV ECX,dword ptr [EBP + -0x8]
004f5b7f  MOV ECX,dword ptr [ECX + 0x5c]
004f5b82  MOV word ptr [ECX + EDX*0x2],AX
004f5b86  MOV EDX,dword ptr [EBP + -0x8]
004f5b89  MOVSX EAX,word ptr [EDX + 0x8]
004f5b8d  MOV ECX,dword ptr [EBP + -0x8]
004f5b90  MOV EDX,dword ptr [ECX + 0x50]
004f5b93  MOV AX,word ptr [EDX + EAX*0x2]
004f5b97  ADD AX,0x1
004f5b9b  MOV ECX,dword ptr [EBP + -0x8]
004f5b9e  MOVSX EDX,word ptr [ECX + 0x8]
004f5ba2  MOV ECX,dword ptr [EBP + -0x8]
004f5ba5  MOV ECX,dword ptr [ECX + 0x50]
004f5ba8  MOV word ptr [ECX + EDX*0x2],AX
004f5bac  MOV EDX,dword ptr [EBP + -0x8]
004f5baf  MOV EAX,dword ptr [EDX + 0xc]
004f5bb2  ADD EAX,dword ptr [EBP + 0x8]
004f5bb5  MOV ECX,dword ptr [EBP + -0x8]
004f5bb8  MOV dword ptr [ECX + 0xc],EAX
004f5bbb  MOV EDX,dword ptr [EBP + -0x8]
004f5bbe  MOVSX EAX,word ptr [EDX + 0x8]
004f5bc2  MOV ECX,dword ptr [EBP + -0x8]
004f5bc5  MOV EDX,dword ptr [ECX + 0x68]
004f5bc8  MOV EAX,dword ptr [EDX + EAX*0x4]
004f5bcb  ADD EAX,dword ptr [EBP + 0x8]
004f5bce  MOV ECX,dword ptr [EBP + -0x8]
004f5bd1  MOVSX EDX,word ptr [ECX + 0x8]
004f5bd5  MOV ECX,dword ptr [EBP + -0x8]
004f5bd8  MOV ECX,dword ptr [ECX + 0x68]
004f5bdb  MOV dword ptr [ECX + EDX*0x4],EAX
004f5bde  MOV EDX,dword ptr [EBP + -0x8]
004f5be1  MOV EAX,dword ptr [EDX + 0x14]
004f5be4  ADD EAX,dword ptr [EBP + 0x8]
004f5be7  MOV ECX,dword ptr [EBP + -0x8]
004f5bea  MOV dword ptr [ECX + 0x14],EAX
004f5bed  MOV EDX,dword ptr [EBP + -0x8]
004f5bf0  MOVSX EAX,word ptr [EDX + 0x8]
004f5bf4  MOV ECX,dword ptr [EBP + -0x8]
004f5bf7  MOV EDX,dword ptr [ECX + 0x34]
004f5bfa  MOV byte ptr [EAX + EDX*0x1],0x1
004f5bfe  MOV ECX,dword ptr [EBP + -0x8]
004f5c01  CALL 0x004f8f20
004f5c06  MOV word ptr [EBP + -0x4],AX
004f5c0a  MOVSX EAX,word ptr [EBP + -0x4]
004f5c0e  TEST EAX,EAX
004f5c10  JGE 0x004f5c29
004f5c12  PUSH 0x191
004f5c17  PUSH 0x6bfe08
004f5c1c  PUSH 0x6bff84
004f5c21  CALL 0x005e9f20
004f5c26  ADD ESP,0xc
004f5c29  MOV AX,word ptr [EBP + -0x4]
004f5c2d  MOV ESP,EBP
004f5c2f  POP EBP
004f5c30  RET 0x4
