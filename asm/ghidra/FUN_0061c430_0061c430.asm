; FUN_0061c430  0061c430
0061c430  PUSH EBP
0061c431  MOV EBP,ESP
0061c433  SUB ESP,0x14
0061c436  MOV word ptr [EBP + -0x8],0x0
0061c43c  MOV EAX,dword ptr [EBP + 0x10]
0061c43f  MOV CL,byte ptr [EAX]
0061c441  MOV byte ptr [EBP + -0x9],CL
0061c444  MOV EDX,dword ptr [EBP + 0x10]
0061c447  ADD EDX,0x1
0061c44a  MOV dword ptr [EBP + 0x10],EDX
0061c44d  MOV EAX,dword ptr [EBP + 0x10]
0061c450  MOV CL,byte ptr [EAX]
0061c452  MOV byte ptr [EBP + -0xa],CL
0061c455  MOV EDX,dword ptr [EBP + 0x10]
0061c458  ADD EDX,0x1
0061c45b  MOV dword ptr [EBP + 0x10],EDX
0061c45e  MOVZX EAX,byte ptr [EBP + -0x9]
0061c462  TEST EAX,EAX
0061c464  JNZ 0x0061c54a
0061c46a  MOV CL,byte ptr [EBP + -0xa]
0061c46d  MOV byte ptr [EBP + -0x14],CL
0061c470  CMP byte ptr [EBP + -0x14],0x0
0061c474  JZ 0x0061c489
0061c476  CMP byte ptr [EBP + -0x14],0x1
0061c47a  JZ 0x0061c484
0061c47c  CMP byte ptr [EBP + -0x14],0x2
0061c480  JZ 0x0061c4a4
0061c482  JMP 0x0061c4f3
0061c484  JMP 0x0061c580
0061c489  MOVZX EDX,word ptr [EBP + 0x8]
0061c48d  MOVZX EAX,word ptr [EBP + -0x8]
0061c491  SUB EDX,EAX
0061c493  ADD EDX,dword ptr [EBP + 0xc]
0061c496  MOV dword ptr [EBP + 0xc],EDX
0061c499  MOV word ptr [EBP + -0x8],0x0
0061c49f  JMP 0x0061c548
0061c4a4  MOV ECX,dword ptr [EBP + 0x10]
0061c4a7  MOVZX DX,byte ptr [ECX]
0061c4ab  MOV word ptr [EBP + -0x10],DX
0061c4af  MOV EAX,dword ptr [EBP + 0x10]
0061c4b2  ADD EAX,0x1
0061c4b5  MOV dword ptr [EBP + 0x10],EAX
0061c4b8  MOV ECX,dword ptr [EBP + 0x10]
0061c4bb  MOVZX DX,byte ptr [ECX]
0061c4bf  MOV word ptr [EBP + -0x4],DX
0061c4c3  MOV EAX,dword ptr [EBP + 0x10]
0061c4c6  ADD EAX,0x1
0061c4c9  MOV dword ptr [EBP + 0x10],EAX
0061c4cc  MOVZX ECX,word ptr [EBP + 0x8]
0061c4d0  MOVZX EDX,word ptr [EBP + -0x4]
0061c4d4  IMUL ECX,EDX
0061c4d7  MOVZX EAX,word ptr [EBP + -0x10]
0061c4db  ADD EAX,dword ptr [EBP + 0xc]
0061c4de  ADD EAX,ECX
0061c4e0  MOV dword ptr [EBP + 0xc],EAX
0061c4e3  MOVZX ECX,word ptr [EBP + -0x10]
0061c4e7  MOVZX EDX,word ptr [EBP + -0x8]
0061c4eb  ADD EDX,ECX
0061c4ed  MOV word ptr [EBP + -0x8],DX
0061c4f1  JMP 0x0061c548
0061c4f3  MOV AL,byte ptr [EBP + -0xa]
0061c4f6  MOV byte ptr [EBP + -0x9],AL
0061c4f9  MOVZX ECX,byte ptr [EBP + -0x9]
0061c4fd  MOVZX EDX,word ptr [EBP + -0x8]
0061c501  ADD EDX,ECX
0061c503  MOV word ptr [EBP + -0x8],DX
0061c507  MOVZX EAX,byte ptr [EBP + -0x9]
0061c50b  MOV CL,byte ptr [EBP + -0x9]
0061c50e  SUB CL,0x1
0061c511  MOV byte ptr [EBP + -0x9],CL
0061c514  TEST EAX,EAX
0061c516  JLE 0x0061c536
0061c518  MOV EDX,dword ptr [EBP + 0xc]
0061c51b  MOV EAX,dword ptr [EBP + 0x10]
0061c51e  MOV CL,byte ptr [EAX]
0061c520  MOV byte ptr [EDX],CL
0061c522  MOV EDX,dword ptr [EBP + 0xc]
0061c525  ADD EDX,0x1
0061c528  MOV dword ptr [EBP + 0xc],EDX
0061c52b  MOV EAX,dword ptr [EBP + 0x10]
0061c52e  ADD EAX,0x1
0061c531  MOV dword ptr [EBP + 0x10],EAX
0061c534  JMP 0x0061c507
0061c536  MOVZX ECX,byte ptr [EBP + -0xa]
0061c53a  AND ECX,0x1
0061c53d  JZ 0x0061c548
0061c53f  MOV EDX,dword ptr [EBP + 0x10]
0061c542  ADD EDX,0x1
0061c545  MOV dword ptr [EBP + 0x10],EDX
0061c548  JMP 0x0061c57b
0061c54a  MOVZX EAX,byte ptr [EBP + -0x9]
0061c54e  MOVZX ECX,word ptr [EBP + -0x8]
0061c552  ADD ECX,EAX
0061c554  MOV word ptr [EBP + -0x8],CX
0061c558  MOVZX EDX,byte ptr [EBP + -0x9]
0061c55c  MOV AL,byte ptr [EBP + -0x9]
0061c55f  SUB AL,0x1
0061c561  MOV byte ptr [EBP + -0x9],AL
0061c564  TEST EDX,EDX
0061c566  JLE 0x0061c57b
0061c568  MOV ECX,dword ptr [EBP + 0xc]
0061c56b  MOV DL,byte ptr [EBP + -0xa]
0061c56e  MOV byte ptr [ECX],DL
0061c570  MOV EAX,dword ptr [EBP + 0xc]
0061c573  ADD EAX,0x1
0061c576  MOV dword ptr [EBP + 0xc],EAX
0061c579  JMP 0x0061c558
0061c57b  JMP 0x0061c43c
0061c580  MOV ESP,EBP
0061c582  POP EBP
0061c583  RET
