; FUN_004eccb0  004eccb0
004eccb0  PUSH EBP
004eccb1  MOV EBP,ESP
004eccb3  SUB ESP,0x3c
004eccb6  PUSH ESI
004eccb7  MOV dword ptr [EBP + -0x1c],ECX
004eccba  MOVSX EAX,word ptr [EBP + 0x8]
004eccbe  TEST EAX,EAX
004eccc0  JGE 0x004eccd9
004eccc2  PUSH 0x29ba
004eccc7  PUSH 0x6bf384
004ecccc  PUSH 0x6bf888
004eccd1  CALL 0x005e9f20
004eccd6  ADD ESP,0xc
004eccd9  MOVSX ESI,word ptr [EBP + 0x8]
004eccdd  MOV ECX,dword ptr [0x00791364]
004ecce3  CALL 0x0047f950
004ecce8  CMP ESI,EAX
004eccea  JL 0x004ecd03
004eccec  PUSH 0x29bb
004eccf1  PUSH 0x6bf384
004eccf6  PUSH 0x6bf858
004eccfb  CALL 0x005e9f20
004ecd00  ADD ESP,0xc
004ecd03  MOVSX EAX,word ptr [EBP + 0xc]
004ecd07  CMP EAX,0x2
004ecd0a  JGE 0x004ecd23
004ecd0c  PUSH 0x29bc
004ecd11  PUSH 0x6bf384
004ecd16  PUSH 0x6bf778
004ecd1b  CALL 0x005e9f20
004ecd20  ADD ESP,0xc
004ecd23  MOVSX ESI,word ptr [EBP + 0xc]
004ecd27  MOV ECX,dword ptr [0x00791364]
004ecd2d  CALL 0x0047f950
004ecd32  CMP ESI,EAX
004ecd34  JLE 0x004ecd4d
004ecd36  PUSH 0x29bd
004ecd3b  PUSH 0x6bf384
004ecd40  PUSH 0x6bf740
004ecd45  CALL 0x005e9f20
004ecd4a  ADD ESP,0xc
004ecd4d  MOV EAX,dword ptr [EBP + -0x1c]
004ecd50  MOVSX ECX,word ptr [EAX + 0x344]
004ecd57  MOV dword ptr [EBP + -0x20],ECX
004ecd5a  FILD dword ptr [EBP + -0x20]
004ecd5d  FDIV double ptr [0x006b4b00]
004ecd63  MOVSX EDX,word ptr [EBP + 0xc]
004ecd67  MOV dword ptr [EBP + -0x24],EDX
004ecd6a  FILD dword ptr [EBP + -0x24]
004ecd6d  FDIVP
004ecd6f  FSTP double ptr [EBP + -0x18]
004ecd72  MOV EAX,dword ptr [EBP + -0x1c]
004ecd75  MOV ECX,dword ptr [EAX + 0x428]
004ecd7b  MOVSX EDX,word ptr [EBP + 0x8]
004ecd7f  IMUL EDX,EDX,0xe
004ecd82  LEA EAX,[ECX + EDX*0x1 + 0x700]
004ecd89  MOVSX ECX,word ptr [EBP + 0xc]
004ecd8d  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004ecd92  TEST EDX,EDX
004ecd94  JNZ 0x004ecd9e
004ecd96  FLD double ptr [EBP + -0x18]
004ecd99  JMP 0x004ece6e
004ecd9e  MOV EAX,dword ptr [EBP + -0x1c]
004ecda1  MOV ECX,dword ptr [EAX + 0x428]
004ecda7  MOVSX EDX,word ptr [EBP + 0x8]
004ecdab  IMUL EDX,EDX,0xe
004ecdae  LEA EAX,[ECX + EDX*0x1 + 0x700]
004ecdb5  MOVSX ECX,word ptr [EBP + 0xc]
004ecdb9  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004ecdbe  MOV dword ptr [EBP + -0x28],EDX
004ecdc1  FILD dword ptr [EBP + -0x28]
004ecdc4  FSTP double ptr [EBP + -0x8]
004ecdc7  MOV EAX,dword ptr [EBP + -0x1c]
004ecdca  MOV ECX,dword ptr [EAX + 0x428]
004ecdd0  MOVSX EDX,word ptr [EBP + 0x8]
004ecdd4  IMUL EDX,EDX,0xe
004ecdd7  LEA EAX,[ECX + EDX*0x1 + 0x770]
004ecdde  MOVSX ECX,word ptr [EBP + 0xc]
004ecde2  MOVZX EDX,word ptr [EAX + ECX*0x2 + -0x4]
004ecde7  MOV dword ptr [EBP + -0x2c],EDX
004ecdea  FILD dword ptr [EBP + -0x2c]
004ecded  FSTP double ptr [EBP + -0x10]
004ecdf0  MOV ECX,dword ptr [0x00791eb8]
004ecdf6  CALL 0x005da7b0
004ecdfb  MOVZX EAX,AL
004ecdfe  TEST EAX,EAX
004ece00  JNZ 0x004ece35
004ece02  MOV ECX,dword ptr [EBP + -0x1c]
004ece05  MOVSX EDX,word ptr [ECX + 0x348]
004ece0c  MOV dword ptr [EBP + -0x30],EDX
004ece0f  FILD dword ptr [EBP + -0x30]
004ece12  FDIVR double ptr [EBP + -0x10]
004ece15  FADD double ptr [EBP + -0x18]
004ece18  MOV EAX,dword ptr [EBP + -0x1c]
004ece1b  MOVSX ECX,word ptr [EAX + 0x348]
004ece22  MOV dword ptr [EBP + -0x34],ECX
004ece25  FILD dword ptr [EBP + -0x34]
004ece28  FDIVR double ptr [EBP + -0x8]
004ece2b  FLD1
004ece2d  FADDP
004ece2f  FDIVP
004ece31  JMP 0x004ece6e
004ece35  MOV EDX,dword ptr [EBP + -0x1c]
004ece38  MOVSX EAX,word ptr [EDX + 0x348]
004ece3f  CDQ
004ece40  SUB EAX,EDX
004ece42  SAR EAX,0x1
004ece44  MOV dword ptr [EBP + -0x38],EAX
004ece47  FILD dword ptr [EBP + -0x38]
004ece4a  FDIVR double ptr [EBP + -0x10]
004ece4d  FADD double ptr [EBP + -0x18]
004ece50  MOV EAX,dword ptr [EBP + -0x1c]
004ece53  MOVSX EAX,word ptr [EAX + 0x348]
004ece5a  CDQ
004ece5b  SUB EAX,EDX
004ece5d  SAR EAX,0x1
004ece5f  MOV dword ptr [EBP + -0x3c],EAX
004ece62  FILD dword ptr [EBP + -0x3c]
004ece65  FDIVR double ptr [EBP + -0x8]
004ece68  FLD1
004ece6a  FADDP
004ece6c  FDIVP
004ece6e  POP ESI
004ece6f  MOV ESP,EBP
004ece71  POP EBP
004ece72  RET 0x8
