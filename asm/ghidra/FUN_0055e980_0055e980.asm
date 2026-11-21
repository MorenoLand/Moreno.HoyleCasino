; FUN_0055e980  0055e980
0055e980  PUSH EBP
0055e981  MOV EBP,ESP
0055e983  SUB ESP,0x14
0055e986  MOV dword ptr [EBP + -0x14],ECX
0055e989  MOV dword ptr [EBP + -0x4],0x0
0055e990  MOV EAX,dword ptr [EBP + 0xc]
0055e993  MOV dword ptr [EBP + -0xc],EAX
0055e996  JMP 0x0055e9a1
0055e998  MOV ECX,dword ptr [EBP + -0xc]
0055e99b  ADD ECX,0x1
0055e99e  MOV dword ptr [EBP + -0xc],ECX
0055e9a1  MOV EDX,dword ptr [EBP + -0xc]
0055e9a4  CMP EDX,dword ptr [EBP + 0x10]
0055e9a7  JGE 0x0055ea80
0055e9ad  MOV EAX,dword ptr [EBP + -0xc]
0055e9b0  PUSH EAX
0055e9b1  MOV ECX,dword ptr [EBP + 0x8]
0055e9b4  PUSH ECX
0055e9b5  MOV ECX,dword ptr [EBP + -0x14]
0055e9b8  CALL 0x0055e440
0055e9bd  MOVZX EDX,AL
0055e9c0  TEST EDX,EDX
0055e9c2  JZ 0x0055ea7b
0055e9c8  MOV dword ptr [EBP + -0x10],0x0
0055e9cf  JMP 0x0055e9da
0055e9d1  MOV EAX,dword ptr [EBP + -0x10]
0055e9d4  ADD EAX,0x1
0055e9d7  MOV dword ptr [EBP + -0x10],EAX
0055e9da  MOV ECX,dword ptr [EBP + -0x14]
0055e9dd  CALL 0x00559380
0055e9e2  CMP dword ptr [EBP + -0x10],EAX
0055e9e5  JGE 0x0055ea74
0055e9eb  MOV ECX,dword ptr [EBP + -0x10]
0055e9ee  MOV EDX,dword ptr [EBP + -0x14]
0055e9f1  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0055e9f6  PUSH EAX
0055e9f7  MOV ECX,dword ptr [EBP + -0x14]
0055e9fa  CALL 0x005593d0
0055e9ff  CMP EAX,0x14
0055ea02  JZ 0x0055ea6f
0055ea04  MOV ECX,dword ptr [EBP + -0x10]
0055ea07  MOV EDX,dword ptr [EBP + -0x14]
0055ea0a  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0055ea0f  PUSH EAX
0055ea10  CALL 0x00641280
0055ea15  ADD ESP,0x4
0055ea18  CMP EAX,dword ptr [EBP + -0xc]
0055ea1b  JL 0x0055ea3b
0055ea1d  MOV ECX,dword ptr [EBP + -0x10]
0055ea20  MOV EDX,dword ptr [EBP + -0x14]
0055ea23  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
0055ea28  PUSH EAX
0055ea29  CALL 0x00641280
0055ea2e  ADD ESP,0x4
0055ea31  MOV ECX,dword ptr [EBP + -0xc]
0055ea34  ADD ECX,0x4
0055ea37  CMP EAX,ECX
0055ea39  JLE 0x0055ea5a
0055ea3b  MOV EDX,dword ptr [EBP + -0x10]
0055ea3e  MOV EAX,dword ptr [EBP + -0x14]
0055ea41  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
0055ea46  PUSH ECX
0055ea47  CALL 0x00641280
0055ea4c  ADD ESP,0x4
0055ea4f  CMP EAX,0xe
0055ea52  JNZ 0x0055ea6f
0055ea54  CMP dword ptr [EBP + -0xc],0x1
0055ea58  JNZ 0x0055ea6f
0055ea5a  MOV EDX,dword ptr [EBP + -0x14]
0055ea5d  ADD EDX,dword ptr [EBP + -0x4]
0055ea60  MOV AL,byte ptr [EBP + -0x10]
0055ea63  MOV byte ptr [EDX + 0x14],AL
0055ea66  MOV ECX,dword ptr [EBP + -0x4]
0055ea69  ADD ECX,0x1
0055ea6c  MOV dword ptr [EBP + -0x4],ECX
0055ea6f  JMP 0x0055e9d1
0055ea74  MOV AL,0x1
0055ea76  JMP 0x0055eb94
0055ea7b  JMP 0x0055e998
0055ea80  MOV EDX,dword ptr [EBP + 0x8]
0055ea83  ADD EDX,0x1
0055ea86  MOV dword ptr [EBP + -0x8],EDX
0055ea89  CMP dword ptr [EBP + -0x8],0x5
0055ea8d  JG 0x0055eb92
0055ea93  MOV EAX,dword ptr [EBP + 0xc]
0055ea96  MOV dword ptr [EBP + -0xc],EAX
0055ea99  JMP 0x0055eaa4
0055ea9b  MOV ECX,dword ptr [EBP + -0xc]
0055ea9e  ADD ECX,0x1
0055eaa1  MOV dword ptr [EBP + -0xc],ECX
0055eaa4  MOV EDX,dword ptr [EBP + -0xc]
0055eaa7  CMP EDX,dword ptr [EBP + 0x10]
0055eaaa  JGE 0x0055eb84
0055eab0  MOV EAX,dword ptr [EBP + -0x8]
0055eab3  PUSH EAX
0055eab4  MOV ECX,dword ptr [EBP + -0xc]
0055eab7  PUSH ECX
0055eab8  MOV EDX,dword ptr [EBP + 0x8]
0055eabb  PUSH EDX
0055eabc  MOV ECX,dword ptr [EBP + -0x14]
0055eabf  CALL 0x0055e4c0
0055eac4  MOVZX EAX,AL
0055eac7  TEST EAX,EAX
0055eac9  JZ 0x0055eb7f
0055eacf  MOV dword ptr [EBP + -0x10],0x0
0055ead6  JMP 0x0055eae1
0055ead8  MOV ECX,dword ptr [EBP + -0x10]
0055eadb  ADD ECX,0x1
0055eade  MOV dword ptr [EBP + -0x10],ECX
0055eae1  MOV ECX,dword ptr [EBP + -0x14]
0055eae4  CALL 0x00559380
0055eae9  CMP dword ptr [EBP + -0x10],EAX
0055eaec  JGE 0x0055eb7b
0055eaf2  MOV EDX,dword ptr [EBP + -0x10]
0055eaf5  MOV EAX,dword ptr [EBP + -0x14]
0055eaf8  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
0055eafd  PUSH ECX
0055eafe  MOV ECX,dword ptr [EBP + -0x14]
0055eb01  CALL 0x005593d0
0055eb06  CMP EAX,0x14
0055eb09  JZ 0x0055eb76
0055eb0b  MOV EDX,dword ptr [EBP + -0x10]
0055eb0e  MOV EAX,dword ptr [EBP + -0x14]
0055eb11  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
0055eb16  PUSH ECX
0055eb17  CALL 0x00641280
0055eb1c  ADD ESP,0x4
0055eb1f  CMP EAX,dword ptr [EBP + -0xc]
0055eb22  JL 0x0055eb42
0055eb24  MOV EDX,dword ptr [EBP + -0x10]
0055eb27  MOV EAX,dword ptr [EBP + -0x14]
0055eb2a  MOV CX,word ptr [EAX + EDX*0x2 + 0x4]
0055eb2f  PUSH ECX
0055eb30  CALL 0x00641280
0055eb35  ADD ESP,0x4
0055eb38  MOV EDX,dword ptr [EBP + -0xc]
0055eb3b  ADD EDX,0x4
0055eb3e  CMP EAX,EDX
0055eb40  JLE 0x0055eb61
0055eb42  MOV EAX,dword ptr [EBP + -0x10]
0055eb45  MOV ECX,dword ptr [EBP + -0x14]
0055eb48  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
0055eb4d  PUSH EDX
0055eb4e  CALL 0x00641280
0055eb53  ADD ESP,0x4
0055eb56  CMP EAX,0xe
0055eb59  JNZ 0x0055eb76
0055eb5b  CMP dword ptr [EBP + -0xc],0x1
0055eb5f  JNZ 0x0055eb76
0055eb61  MOV EAX,dword ptr [EBP + -0x14]
0055eb64  ADD EAX,dword ptr [EBP + -0x4]
0055eb67  MOV CL,byte ptr [EBP + -0x10]
0055eb6a  MOV byte ptr [EAX + 0x14],CL
0055eb6d  MOV EDX,dword ptr [EBP + -0x4]
0055eb70  ADD EDX,0x1
0055eb73  MOV dword ptr [EBP + -0x4],EDX
0055eb76  JMP 0x0055ead8
0055eb7b  MOV AL,0x1
0055eb7d  JMP 0x0055eb94
0055eb7f  JMP 0x0055ea9b
0055eb84  MOV EAX,dword ptr [EBP + -0x8]
0055eb87  ADD EAX,0x1
0055eb8a  MOV dword ptr [EBP + -0x8],EAX
0055eb8d  JMP 0x0055ea89
0055eb92  XOR AL,AL
0055eb94  MOV ESP,EBP
0055eb96  POP EBP
0055eb97  RET 0xc
