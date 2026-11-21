; FUN_0062daf0  0062daf0
0062daf0  PUSH EBP
0062daf1  MOV EBP,ESP
0062daf3  SUB ESP,0x8
0062daf6  CMP dword ptr [EBP + 0x8],0x0
0062dafa  JZ 0x0062db06
0062dafc  MOV EAX,dword ptr [EBP + 0x8]
0062daff  MOVSX ECX,byte ptr [EAX]
0062db02  TEST ECX,ECX
0062db04  JNZ 0x0062db0b
0062db06  JMP 0x0062db9d
0062db0b  MOV EDX,dword ptr [EBP + 0x8]
0062db0e  MOV dword ptr [EBP + -0x4],EDX
0062db11  MOV EAX,dword ptr [EBP + -0x4]
0062db14  MOVSX ECX,byte ptr [EAX]
0062db17  CMP ECX,0x20
0062db1a  JNZ 0x0062db27
0062db1c  MOV EDX,dword ptr [EBP + -0x4]
0062db1f  ADD EDX,0x1
0062db22  MOV dword ptr [EBP + -0x4],EDX
0062db25  JMP 0x0062db11
0062db27  MOV EAX,dword ptr [EBP + -0x4]
0062db2a  CMP EAX,dword ptr [EBP + 0x8]
0062db2d  JZ 0x0062db65
0062db2f  MOV ECX,dword ptr [EBP + 0x8]
0062db32  MOV dword ptr [EBP + -0x8],ECX
0062db35  MOV EDX,dword ptr [EBP + -0x4]
0062db38  MOVSX EAX,byte ptr [EDX]
0062db3b  TEST EAX,EAX
0062db3d  JZ 0x0062db5d
0062db3f  MOV ECX,dword ptr [EBP + -0x8]
0062db42  MOV EDX,dword ptr [EBP + -0x4]
0062db45  MOV AL,byte ptr [EDX]
0062db47  MOV byte ptr [ECX],AL
0062db49  MOV ECX,dword ptr [EBP + -0x8]
0062db4c  ADD ECX,0x1
0062db4f  MOV dword ptr [EBP + -0x8],ECX
0062db52  MOV EDX,dword ptr [EBP + -0x4]
0062db55  ADD EDX,0x1
0062db58  MOV dword ptr [EBP + -0x4],EDX
0062db5b  JMP 0x0062db35
0062db5d  MOV EAX,dword ptr [EBP + -0x8]
0062db60  MOV byte ptr [EAX],0x0
0062db63  JMP 0x0062db77
0062db65  MOV ECX,dword ptr [EBP + 0x8]
0062db68  PUSH ECX
0062db69  CALL 0x00686ecc
0062db6e  ADD ESP,0x4
0062db71  ADD EAX,dword ptr [EBP + -0x4]
0062db74  MOV dword ptr [EBP + -0x8],EAX
0062db77  MOV EDX,dword ptr [EBP + -0x8]
0062db7a  SUB EDX,0x1
0062db7d  MOV dword ptr [EBP + -0x4],EDX
0062db80  MOV EAX,dword ptr [EBP + -0x4]
0062db83  MOVSX ECX,byte ptr [EAX]
0062db86  CMP ECX,0x20
0062db89  JNZ 0x0062db96
0062db8b  MOV EDX,dword ptr [EBP + -0x4]
0062db8e  SUB EDX,0x1
0062db91  MOV dword ptr [EBP + -0x4],EDX
0062db94  JMP 0x0062db80
0062db96  MOV EAX,dword ptr [EBP + -0x4]
0062db99  MOV byte ptr [EAX + 0x1],0x0
0062db9d  MOV ESP,EBP
0062db9f  POP EBP
0062dba0  RET
