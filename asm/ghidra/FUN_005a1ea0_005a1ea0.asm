; FUN_005a1ea0  005a1ea0
005a1ea0  PUSH EBP
005a1ea1  MOV EBP,ESP
005a1ea3  SUB ESP,0x18
005a1ea6  MOV dword ptr [EBP + -0x14],ECX
005a1ea9  MOV EAX,dword ptr [EBP + 0x8]
005a1eac  PUSH EAX
005a1ead  CALL 0x005dcb00
005a1eb2  ADD ESP,0x4
005a1eb5  MOV dword ptr [EBP + -0x10],EAX
005a1eb8  MOV ECX,dword ptr [EBP + -0x10]
005a1ebb  CALL 0x0063aac0
005a1ec0  MOV ECX,dword ptr [EAX]
005a1ec2  MOV dword ptr [EBP + -0x8],ECX
005a1ec5  CMP dword ptr [EBP + -0x8],0x2
005a1ec9  JZ 0x005a1ee7
005a1ecb  MOV ECX,dword ptr [EBP + -0x10]
005a1ece  CALL 0x0063aac0
005a1ed3  MOV EDX,dword ptr [EAX]
005a1ed5  MOV dword ptr [EBP + -0xc],EDX
005a1ed8  CMP dword ptr [EBP + -0xc],0x3
005a1edc  JZ 0x005a1ee7
005a1ede  MOV dword ptr [EBP + -0x18],0x0
005a1ee5  JMP 0x005a1eee
005a1ee7  MOV dword ptr [EBP + -0x18],0x1
005a1eee  MOVZX EAX,byte ptr [EBP + -0x18]
005a1ef2  TEST EAX,EAX
005a1ef4  JZ 0x005a1f18
005a1ef6  MOV CL,byte ptr [EBP + 0x10]
005a1ef9  PUSH ECX
005a1efa  MOV DL,byte ptr [EBP + 0xc]
005a1efd  PUSH EDX
005a1efe  MOV EAX,dword ptr [EBP + 0x8]
005a1f01  PUSH EAX
005a1f02  MOV ECX,dword ptr [EBP + -0x14]
005a1f05  CALL 0x005a2a40
005a1f0a  MOVZX ECX,AL
005a1f0d  TEST ECX,ECX
005a1f0f  JZ 0x005a1f18
005a1f11  XOR AL,AL
005a1f13  JMP 0x005a1fe1
005a1f18  MOV EDX,dword ptr [EBP + -0x14]
005a1f1b  MOV byte ptr [EDX + 0xf0],0x0
005a1f22  MOV EAX,dword ptr [EBP + 0x8]
005a1f25  IMUL EAX,EAX,0x3
005a1f28  MOV dword ptr [EBP + -0x4],EAX
005a1f2b  MOV ECX,dword ptr [EBP + -0x14]
005a1f2e  ADD ECX,dword ptr [EBP + 0x8]
005a1f31  MOV DL,byte ptr [EBP + 0xc]
005a1f34  MOV byte ptr [ECX + 0xfb],DL
005a1f3a  MOV EAX,dword ptr [EBP + -0x14]
005a1f3d  ADD EAX,dword ptr [EBP + 0x8]
005a1f40  MOVZX ECX,byte ptr [EAX + 0xfb]
005a1f47  TEST ECX,ECX
005a1f49  JNZ 0x005a1f77
005a1f4b  MOV EDX,dword ptr [EBP + 0x8]
005a1f4e  PUSH EDX
005a1f4f  MOV ECX,dword ptr [EBP + -0x14]
005a1f52  CALL 0x005a3690
005a1f57  MOVZX EAX,AL
005a1f5a  TEST EAX,EAX
005a1f5c  JZ 0x005a1f77
005a1f5e  PUSH 0x0
005a1f60  PUSH 0x0
005a1f62  PUSH 0x3
005a1f64  MOV ECX,dword ptr [EBP + 0x8]
005a1f67  PUSH ECX
005a1f68  MOV EDX,dword ptr [EBP + -0x4]
005a1f6b  MOV EAX,dword ptr [EBP + -0x14]
005a1f6e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0xc]
005a1f72  CALL 0x005a4390
005a1f77  MOV ECX,dword ptr [EBP + -0x14]
005a1f7a  ADD ECX,dword ptr [EBP + 0x8]
005a1f7d  MOV DL,byte ptr [EBP + 0x10]
005a1f80  MOV byte ptr [ECX + 0xff],DL
005a1f86  MOV EAX,dword ptr [EBP + -0x14]
005a1f89  ADD EAX,dword ptr [EBP + 0x8]
005a1f8c  MOVZX ECX,byte ptr [EAX + 0xff]
005a1f93  TEST ECX,ECX
005a1f95  JNZ 0x005a1fc3
005a1f97  MOV EDX,dword ptr [EBP + 0x8]
005a1f9a  PUSH EDX
005a1f9b  MOV ECX,dword ptr [EBP + -0x14]
005a1f9e  CALL 0x005a3630
005a1fa3  MOVZX EAX,AL
005a1fa6  TEST EAX,EAX
005a1fa8  JZ 0x005a1fc3
005a1faa  PUSH 0x0
005a1fac  PUSH 0x0
005a1fae  PUSH 0x3
005a1fb0  MOV ECX,dword ptr [EBP + 0x8]
005a1fb3  PUSH ECX
005a1fb4  MOV EDX,dword ptr [EBP + -0x4]
005a1fb7  MOV EAX,dword ptr [EBP + -0x14]
005a1fba  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x10]
005a1fbe  CALL 0x005a4390
005a1fc3  PUSH 0x0
005a1fc5  MOV ECX,dword ptr [EBP + 0x8]
005a1fc8  PUSH ECX
005a1fc9  MOV ECX,dword ptr [EBP + -0x14]
005a1fcc  CALL 0x005a3c20
005a1fd1  PUSH 0x1
005a1fd3  MOV EDX,dword ptr [EBP + 0x8]
005a1fd6  PUSH EDX
005a1fd7  MOV ECX,dword ptr [EBP + -0x14]
005a1fda  CALL 0x005a3b20
005a1fdf  MOV AL,0x1
005a1fe1  MOV ESP,EBP
005a1fe3  POP EBP
005a1fe4  RET 0xc
