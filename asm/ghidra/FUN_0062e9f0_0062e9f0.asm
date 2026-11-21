; FUN_0062e9f0  0062e9f0
0062e9f0  PUSH EBP
0062e9f1  MOV EBP,ESP
0062e9f3  SUB ESP,0x14
0062e9f6  MOV word ptr [EBP + -0x8],0x0
0062e9fc  MOV EAX,dword ptr [EBP + 0x10]
0062e9ff  MOV CL,byte ptr [EAX]
0062ea01  MOV byte ptr [EBP + -0x9],CL
0062ea04  MOV EDX,dword ptr [EBP + 0x10]
0062ea07  ADD EDX,0x1
0062ea0a  MOV dword ptr [EBP + 0x10],EDX
0062ea0d  MOV EAX,dword ptr [EBP + 0x10]
0062ea10  MOV CL,byte ptr [EAX]
0062ea12  MOV byte ptr [EBP + -0xa],CL
0062ea15  MOV EDX,dword ptr [EBP + 0x10]
0062ea18  ADD EDX,0x1
0062ea1b  MOV dword ptr [EBP + 0x10],EDX
0062ea1e  MOVZX EAX,byte ptr [EBP + -0x9]
0062ea22  TEST EAX,EAX
0062ea24  JNZ 0x0062eb0e
0062ea2a  MOV CL,byte ptr [EBP + -0xa]
0062ea2d  MOV byte ptr [EBP + -0x14],CL
0062ea30  CMP byte ptr [EBP + -0x14],0x0
0062ea34  JZ 0x0062ea49
0062ea36  CMP byte ptr [EBP + -0x14],0x1
0062ea3a  JZ 0x0062ea44
0062ea3c  CMP byte ptr [EBP + -0x14],0x2
0062ea40  JZ 0x0062ea66
0062ea42  JMP 0x0062eab7
0062ea44  JMP 0x0062eb4b
0062ea49  MOVZX EDX,word ptr [EBP + 0x8]
0062ea4d  NEG EDX
0062ea4f  MOVZX EAX,word ptr [EBP + -0x8]
0062ea53  SUB EDX,EAX
0062ea55  ADD EDX,dword ptr [EBP + 0xc]
0062ea58  MOV dword ptr [EBP + 0xc],EDX
0062ea5b  MOV word ptr [EBP + -0x8],0x0
0062ea61  JMP 0x0062eb0c
0062ea66  MOV ECX,dword ptr [EBP + 0x10]
0062ea69  MOVZX DX,byte ptr [ECX]
0062ea6d  MOV word ptr [EBP + -0x10],DX
0062ea71  MOV EAX,dword ptr [EBP + 0x10]
0062ea74  ADD EAX,0x1
0062ea77  MOV dword ptr [EBP + 0x10],EAX
0062ea7a  MOV ECX,dword ptr [EBP + 0x10]
0062ea7d  MOVZX DX,byte ptr [ECX]
0062ea81  MOV word ptr [EBP + -0x4],DX
0062ea85  MOV EAX,dword ptr [EBP + 0x10]
0062ea88  ADD EAX,0x1
0062ea8b  MOV dword ptr [EBP + 0x10],EAX
0062ea8e  MOVZX ECX,word ptr [EBP + 0x8]
0062ea92  MOVZX EDX,word ptr [EBP + -0x4]
0062ea96  IMUL ECX,EDX
0062ea99  NEG ECX
0062ea9b  MOVZX EAX,word ptr [EBP + -0x10]
0062ea9f  ADD EAX,dword ptr [EBP + 0xc]
0062eaa2  ADD EAX,ECX
0062eaa4  MOV dword ptr [EBP + 0xc],EAX
0062eaa7  MOVZX ECX,word ptr [EBP + -0x10]
0062eaab  MOVZX EDX,word ptr [EBP + -0x8]
0062eaaf  ADD EDX,ECX
0062eab1  MOV word ptr [EBP + -0x8],DX
0062eab5  JMP 0x0062eb0c
0062eab7  MOV AL,byte ptr [EBP + -0xa]
0062eaba  MOV byte ptr [EBP + -0x9],AL
0062eabd  MOVZX ECX,byte ptr [EBP + -0x9]
0062eac1  MOVZX EDX,word ptr [EBP + -0x8]
0062eac5  ADD EDX,ECX
0062eac7  MOV word ptr [EBP + -0x8],DX
0062eacb  MOVZX EAX,byte ptr [EBP + -0x9]
0062eacf  MOV CL,byte ptr [EBP + -0x9]
0062ead2  SUB CL,0x1
0062ead5  MOV byte ptr [EBP + -0x9],CL
0062ead8  TEST EAX,EAX
0062eada  JLE 0x0062eafa
0062eadc  MOV EDX,dword ptr [EBP + 0xc]
0062eadf  MOV EAX,dword ptr [EBP + 0x10]
0062eae2  MOV CL,byte ptr [EAX]
0062eae4  MOV byte ptr [EDX],CL
0062eae6  MOV EDX,dword ptr [EBP + 0xc]
0062eae9  ADD EDX,0x1
0062eaec  MOV dword ptr [EBP + 0xc],EDX
0062eaef  MOV EAX,dword ptr [EBP + 0x10]
0062eaf2  ADD EAX,0x1
0062eaf5  MOV dword ptr [EBP + 0x10],EAX
0062eaf8  JMP 0x0062eacb
0062eafa  MOVZX ECX,byte ptr [EBP + -0xa]
0062eafe  AND ECX,0x1
0062eb01  JZ 0x0062eb0c
0062eb03  MOV EDX,dword ptr [EBP + 0x10]
0062eb06  ADD EDX,0x1
0062eb09  MOV dword ptr [EBP + 0x10],EDX
0062eb0c  JMP 0x0062eb46
0062eb0e  MOVZX EAX,byte ptr [EBP + -0x9]
0062eb12  MOVZX ECX,word ptr [EBP + -0x8]
0062eb16  ADD ECX,EAX
0062eb18  MOV word ptr [EBP + -0x8],CX
0062eb1c  MOV DL,byte ptr [EBP + -0xa]
0062eb1f  MOV byte ptr [EBP + -0xb],DL
0062eb22  MOVZX EAX,byte ptr [EBP + -0x9]
0062eb26  MOV CL,byte ptr [EBP + -0x9]
0062eb29  SUB CL,0x1
0062eb2c  MOV byte ptr [EBP + -0x9],CL
0062eb2f  TEST EAX,EAX
0062eb31  JLE 0x0062eb46
0062eb33  MOV EDX,dword ptr [EBP + 0xc]
0062eb36  MOV AL,byte ptr [EBP + -0xb]
0062eb39  MOV byte ptr [EDX],AL
0062eb3b  MOV ECX,dword ptr [EBP + 0xc]
0062eb3e  ADD ECX,0x1
0062eb41  MOV dword ptr [EBP + 0xc],ECX
0062eb44  JMP 0x0062eb22
0062eb46  JMP 0x0062e9fc
0062eb4b  MOV ESP,EBP
0062eb4d  POP EBP
0062eb4e  RET
