; FUN_0062b430  0062b430
0062b430  PUSH EBP
0062b431  MOV EBP,ESP
0062b433  SUB ESP,0x10
0062b436  MOV dword ptr [EBP + -0x10],ECX
0062b439  MOV EAX,dword ptr [EBP + -0x10]
0062b43c  CMP dword ptr [EAX + 0xc],0x0
0062b440  JNZ 0x0062b449
0062b442  XOR EAX,EAX
0062b444  JMP 0x0062b525
0062b449  MOV ECX,dword ptr [EBP + 0xc]
0062b44c  PUSH ECX
0062b44d  MOV EDX,dword ptr [EBP + 0x8]
0062b450  PUSH EDX
0062b451  MOV ECX,dword ptr [EBP + -0x10]
0062b454  CALL 0x0062b530
0062b459  MOV dword ptr [EBP + -0x4],EAX
0062b45c  MOV EAX,dword ptr [EBP + -0x10]
0062b45f  MOV ECX,dword ptr [EAX + 0x14]
0062b462  MOV EDX,dword ptr [EBP + -0x4]
0062b465  CMP EDX,dword ptr [ECX]
0062b467  JNC 0x0062b523
0062b46d  MOV EAX,dword ptr [EBP + -0x10]
0062b470  MOV ECX,dword ptr [EAX + 0x14]
0062b473  MOV EDX,dword ptr [EBP + -0x4]
0062b476  SHL EDX,0x4
0062b479  MOV EAX,dword ptr [EBP + 0x10]
0062b47c  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x10]
0062b480  MOV dword ptr [EAX],ECX
0062b482  MOV EDX,dword ptr [EBP + -0x10]
0062b485  MOV EAX,dword ptr [EDX + 0x14]
0062b488  MOV ECX,dword ptr [EBP + -0x4]
0062b48b  SHL ECX,0x4
0062b48e  MOV EDX,dword ptr [EAX + ECX*0x1 + 0x14]
0062b492  MOV dword ptr [EBP + -0xc],EDX
0062b495  PUSH 0x0
0062b497  MOV EAX,dword ptr [EBP + 0x10]
0062b49a  MOV ECX,dword ptr [EAX]
0062b49c  PUSH ECX
0062b49d  MOV EDX,dword ptr [EBP + -0x10]
0062b4a0  MOV EAX,dword ptr [EDX + 0xc]
0062b4a3  PUSH EAX
0062b4a4  CALL dword ptr [0x006b230c]
0062b4aa  ADD ESP,0xc
0062b4ad  MOV ECX,dword ptr [EBP + -0x10]
0062b4b0  MOV EDX,dword ptr [ECX + 0x14]
0062b4b3  CMP dword ptr [EDX + 0x4],0x0
0062b4b7  JZ 0x0062b513
0062b4b9  MOV EAX,dword ptr [EBP + -0x10]
0062b4bc  MOV ECX,dword ptr [EAX + 0xc]
0062b4bf  PUSH ECX
0062b4c0  CALL dword ptr [0x006b2310]
0062b4c6  ADD ESP,0x4
0062b4c9  MOV dword ptr [EBP + -0x8],EAX
0062b4cc  CMP dword ptr [EBP + -0x8],0x0
0062b4d0  JZ 0x0062b4fd
0062b4d2  MOV EDX,dword ptr [EBP + -0xc]
0062b4d5  SUB EDX,0x1
0062b4d8  MOV dword ptr [EBP + -0xc],EDX
0062b4db  MOV EAX,dword ptr [EBP + 0x10]
0062b4de  MOV ECX,dword ptr [EAX]
0062b4e0  ADD ECX,0x1
0062b4e3  MOV EDX,dword ptr [EBP + 0x10]
0062b4e6  MOV dword ptr [EDX],ECX
0062b4e8  MOV EAX,dword ptr [EBP + -0x10]
0062b4eb  MOV ECX,dword ptr [EAX + 0xc]
0062b4ee  PUSH ECX
0062b4ef  CALL dword ptr [0x006b2310]
0062b4f5  ADD ESP,0x4
0062b4f8  MOV dword ptr [EBP + -0x8],EAX
0062b4fb  JMP 0x0062b4cc
0062b4fd  MOV EDX,dword ptr [EBP + -0xc]
0062b500  SUB EDX,0x1
0062b503  MOV dword ptr [EBP + -0xc],EDX
0062b506  MOV EAX,dword ptr [EBP + 0x10]
0062b509  MOV ECX,dword ptr [EAX]
0062b50b  ADD ECX,0x1
0062b50e  MOV EDX,dword ptr [EBP + 0x10]
0062b511  MOV dword ptr [EDX],ECX
0062b513  MOV EAX,dword ptr [EBP + 0x14]
0062b516  MOV ECX,dword ptr [EBP + -0xc]
0062b519  MOV dword ptr [EAX],ECX
0062b51b  MOV EDX,dword ptr [EBP + -0x10]
0062b51e  MOV EAX,dword ptr [EDX + 0xc]
0062b521  JMP 0x0062b525
0062b523  XOR EAX,EAX
0062b525  MOV ESP,EBP
0062b527  POP EBP
0062b528  RET 0x10
