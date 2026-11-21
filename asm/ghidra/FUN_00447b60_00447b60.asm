; FUN_00447b60  00447b60
00447b60  PUSH EBP
00447b61  MOV EBP,ESP
00447b63  PUSH ECX
00447b64  MOV dword ptr [EBP + -0x4],ECX
00447b67  MOVZX EAX,byte ptr [EBP + 0x10]
00447b6b  TEST EAX,EAX
00447b6d  JZ 0x00447bb9
00447b6f  PUSH -0x1
00447b71  MOV ECX,dword ptr [EBP + -0x4]
00447b74  CALL 0x00447990
00447b79  PUSH EAX
00447b7a  MOV ECX,dword ptr [EBP + 0x8]
00447b7d  MOV EDX,dword ptr [EBP + -0x4]
00447b80  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
00447b84  CALL 0x005eaf00
00447b89  MOV AX,word ptr [EBP + 0xc]
00447b8d  PUSH EAX
00447b8e  PUSH -0x1
00447b90  MOV ECX,dword ptr [EBP + -0x4]
00447b93  CALL 0x004479d0
00447b98  PUSH EAX
00447b99  MOV ECX,dword ptr [EBP + 0x8]
00447b9c  MOV EDX,dword ptr [EBP + -0x4]
00447b9f  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x44]
00447ba3  MOV ECX,dword ptr [EBP + 0x8]
00447ba6  MOV EDX,dword ptr [EBP + -0x4]
00447ba9  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
00447bad  MOV EAX,dword ptr [EAX]
00447baf  MOV EDX,dword ptr [EAX + 0xb0]
00447bb5  CALL EDX
00447bb7  JMP 0x00447bef
00447bb9  PUSH 0x310e9d
00447bbe  MOV EAX,dword ptr [EBP + 0x8]
00447bc1  MOV ECX,dword ptr [EBP + -0x4]
00447bc4  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
00447bc8  CALL 0x005eaf00
00447bcd  PUSH 0x35
00447bcf  MOV EDX,dword ptr [EBP + 0x8]
00447bd2  MOV EAX,dword ptr [EBP + -0x4]
00447bd5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x44]
00447bd9  MOV EDX,dword ptr [EBP + 0x8]
00447bdc  MOV EAX,dword ptr [EBP + -0x4]
00447bdf  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x44]
00447be3  MOV EAX,dword ptr [ECX]
00447be5  MOV ECX,EDX
00447be7  MOV EDX,dword ptr [EAX + 0xb0]
00447bed  CALL EDX
00447bef  MOV EAX,dword ptr [EBP + 0x8]
00447bf2  PUSH EAX
00447bf3  PUSH -0x1
00447bf5  MOV ECX,dword ptr [EBP + -0x4]
00447bf8  CALL 0x00447af0
00447bfd  PUSH EAX
00447bfe  MOV ECX,dword ptr [EBP + 0x8]
00447c01  PUSH ECX
00447c02  PUSH -0x1
00447c04  MOV ECX,dword ptr [EBP + -0x4]
00447c07  CALL 0x00447a70
00447c0c  PUSH EAX
00447c0d  MOV EDX,dword ptr [EBP + 0x8]
00447c10  MOV EAX,dword ptr [EBP + -0x4]
00447c13  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x44]
00447c17  MOV EDX,dword ptr [EBP + 0x8]
00447c1a  MOV EAX,dword ptr [EBP + -0x4]
00447c1d  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x44]
00447c21  MOV EAX,dword ptr [ECX]
00447c23  MOV ECX,EDX
00447c25  MOV EDX,dword ptr [EAX + 0x44]
00447c28  CALL EDX
00447c2a  MOV EAX,dword ptr [EBP + 0x8]
00447c2d  ADD EAX,0x1
00447c30  PUSH EAX
00447c31  MOV ECX,dword ptr [EBP + 0x8]
00447c34  MOV EDX,dword ptr [EBP + -0x4]
00447c37  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x44]
00447c3b  MOV ECX,dword ptr [EBP + 0x8]
00447c3e  MOV EDX,dword ptr [EBP + -0x4]
00447c41  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x44]
00447c45  MOV EAX,dword ptr [EAX]
00447c47  MOV EDX,dword ptr [EAX + 0x6c]
00447c4a  CALL EDX
00447c4c  MOV EAX,dword ptr [EBP + 0x8]
00447c4f  MOV ECX,dword ptr [EBP + -0x4]
00447c52  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x44]
00447c56  MOV EAX,dword ptr [EBP + 0x8]
00447c59  MOV ECX,dword ptr [EBP + -0x4]
00447c5c  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x44]
00447c60  MOV EDX,dword ptr [EDX]
00447c62  MOV EAX,dword ptr [EDX + 0x74]
00447c65  CALL EAX
00447c67  MOV ESP,EBP
00447c69  POP EBP
00447c6a  RET 0xc
