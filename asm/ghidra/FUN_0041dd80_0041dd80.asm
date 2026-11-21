; FUN_0041dd80  0041dd80
0041dd80  PUSH EBP
0041dd81  MOV EBP,ESP
0041dd83  SUB ESP,0x44
0041dd86  MOV dword ptr [EBP + -0x18],ECX
0041dd89  MOV EAX,[0x00790354]
0041dd8e  MOV EDX,dword ptr [EAX]
0041dd90  MOV ECX,dword ptr [0x00790354]
0041dd96  MOV EAX,dword ptr [EDX + 0x2b0]
0041dd9c  CALL EAX
0041dd9e  MOV dword ptr [EBP + -0x8],EAX
0041dda1  MOV ECX,dword ptr [0x00790354]
0041dda7  MOV EDX,dword ptr [ECX]
0041dda9  MOV ECX,dword ptr [0x00790354]
0041ddaf  MOV EAX,dword ptr [EDX + 0x2b4]
0041ddb5  CALL EAX
0041ddb7  MOV dword ptr [EBP + -0x4],EAX
0041ddba  MOV ECX,dword ptr [EBP + 0x8]
0041ddbd  PUSH ECX
0041ddbe  CALL 0x005dcb00
0041ddc3  ADD ESP,0x4
0041ddc6  MOV dword ptr [EBP + -0x1c],EAX
0041ddc9  MOV EDX,dword ptr [EBP + -0x1c]
0041ddcc  MOV EAX,dword ptr [EDX]
0041ddce  MOV ECX,dword ptr [EBP + -0x1c]
0041ddd1  MOV EDX,dword ptr [EAX + 0x18]
0041ddd4  CALL EDX
0041ddd6  MOV dword ptr [EBP + -0x14],EAX
0041ddd9  MOV EAX,dword ptr [EBP + -0x8]
0041dddc  MOV dword ptr [EBP + -0xc],EAX
0041dddf  MOV ECX,dword ptr [EBP + 0x8]
0041dde2  PUSH ECX
0041dde3  CALL 0x005dcb00
0041dde8  ADD ESP,0x4
0041ddeb  MOV EDX,dword ptr [EAX + 0x4a8]
0041ddf1  MOV dword ptr [EBP + -0x10],EDX
0041ddf4  CMP dword ptr [EBP + -0x10],-0x4
0041ddf8  JGE 0x0041de0c
0041ddfa  PUSH 0x5
0041ddfc  CALL 0x0062fbf0
0041de01  ADD ESP,0x4
0041de04  OR ECX,0xffffffff
0041de07  SUB ECX,EAX
0041de09  MOV dword ptr [EBP + -0x10],ECX
0041de0c  PUSH 0x5
0041de0e  CALL 0x0062fbf0
0041de13  ADD ESP,0x4
0041de16  ADD EAX,0x1
0041de19  IMUL EAX,dword ptr [EBP + -0x8]
0041de1d  MOV dword ptr [EBP + -0x20],EAX
0041de20  FILD dword ptr [EBP + -0x20]
0041de23  PUSH 0x5
0041de25  FSTP double ptr [EBP + -0x28]
0041de28  CALL 0x0062fbf0
0041de2d  ADD ESP,0x4
0041de30  MOV ECX,EAX
0041de32  ADD ECX,0x1
0041de35  MOV EAX,dword ptr [EBP + -0x14]
0041de38  CDQ
0041de39  IDIV ECX
0041de3b  MOV dword ptr [EBP + -0x2c],EAX
0041de3e  FILD dword ptr [EBP + -0x2c]
0041de41  FMUL double ptr [EBP + -0x28]
0041de44  MOV EDX,dword ptr [EBP + -0x10]
0041de47  IMUL EDX,dword ptr [EBP + -0x8]
0041de4b  MOV dword ptr [EBP + -0x30],EDX
0041de4e  FILD dword ptr [EBP + -0x30]
0041de51  PUSH 0x5
0041de53  FXCH
0041de55  FSTP double ptr [EBP + -0x38]
0041de58  FSTP double ptr [EBP + -0x40]
0041de5b  CALL 0x0062fbf0
0041de60  ADD ESP,0x4
0041de63  MOV ECX,EAX
0041de65  ADD ECX,0x1
0041de68  MOV EAX,dword ptr [EBP + -0x14]
0041de6b  CDQ
0041de6c  IDIV ECX
0041de6e  MOV dword ptr [EBP + -0x44],EAX
0041de71  FILD dword ptr [EBP + -0x44]
0041de74  FMUL double ptr [EBP + -0x40]
0041de77  FADD double ptr [EBP + -0x38]
0041de7a  CALL 0x00686cc0
0041de7f  MOV dword ptr [EBP + -0xc],EAX
0041de82  MOV EAX,dword ptr [EBP + -0xc]
0041de85  CDQ
0041de86  MOV ECX,0x3
0041de8b  IDIV ECX
0041de8d  MOV dword ptr [EBP + -0xc],EAX
0041de90  MOV EAX,dword ptr [EBP + -0xc]
0041de93  CDQ
0041de94  MOV ECX,0x5
0041de99  IDIV ECX
0041de9b  TEST EDX,EDX
0041de9d  JZ 0x0041deaa
0041de9f  MOV EDX,dword ptr [EBP + -0xc]
0041dea2  ADD EDX,0x1
0041dea5  MOV dword ptr [EBP + -0xc],EDX
0041dea8  JMP 0x0041de90
0041deaa  MOV EAX,dword ptr [EBP + -0xc]
0041dead  CMP EAX,dword ptr [EBP + -0x8]
0041deb0  JGE 0x0041deb8
0041deb2  MOV ECX,dword ptr [EBP + -0x8]
0041deb5  MOV dword ptr [EBP + -0xc],ECX
0041deb8  MOV EDX,dword ptr [EBP + -0xc]
0041debb  CMP EDX,dword ptr [EBP + -0x4]
0041debe  JLE 0x0041dec6
0041dec0  MOV EAX,dword ptr [EBP + -0x4]
0041dec3  MOV dword ptr [EBP + -0xc],EAX
0041dec6  MOV ECX,dword ptr [EBP + -0xc]
0041dec9  PUSH ECX
0041deca  MOV EDX,dword ptr [EBP + 0x8]
0041decd  PUSH EDX
0041dece  MOV ECX,dword ptr [EBP + -0x18]
0041ded1  CALL 0x0041e450
0041ded6  MOVZX EAX,AL
0041ded9  TEST EAX,EAX
0041dedb  JNZ 0x0041dee8
0041dedd  MOV ECX,dword ptr [EBP + -0xc]
0041dee0  SUB ECX,0x5
0041dee3  MOV dword ptr [EBP + -0xc],ECX
0041dee6  JMP 0x0041dec6
0041dee8  MOV EDX,dword ptr [EBP + -0xc]
0041deeb  CMP EDX,dword ptr [EBP + -0x8]
0041deee  JL 0x0041def8
0041def0  MOV EAX,dword ptr [EBP + -0xc]
0041def3  CMP EAX,dword ptr [EBP + -0x4]
0041def6  JLE 0x0041df0c
0041def8  PUSH 0x37
0041defa  PUSH 0x6b5b24
0041deff  PUSH 0x6b5afc
0041df04  CALL 0x005e9f20
0041df09  ADD ESP,0xc
0041df0c  MOV EAX,dword ptr [EBP + -0xc]
0041df0f  MOV ESP,EBP
0041df11  POP EBP
0041df12  RET 0x4
