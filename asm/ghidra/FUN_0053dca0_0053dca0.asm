; FUN_0053dca0  0053dca0
0053dca0  PUSH EBP
0053dca1  MOV EBP,ESP
0053dca3  SUB ESP,0x24
0053dca6  MOV dword ptr [EBP + -0x20],ECX
0053dca9  MOV byte ptr [EBP + -0x1],0x0
0053dcad  MOV EAX,dword ptr [EBP + 0x8]
0053dcb0  PUSH EAX
0053dcb1  CALL 0x005dcb00
0053dcb6  ADD ESP,0x4
0053dcb9  MOV dword ptr [EBP + -0x10],EAX
0053dcbc  MOV ECX,dword ptr [EBP + -0x10]
0053dcbf  CALL 0x0063aac0
0053dcc4  MOV ECX,dword ptr [EAX]
0053dcc6  MOV dword ptr [EBP + -0x8],ECX
0053dcc9  CMP dword ptr [EBP + -0x8],0x2
0053dccd  JZ 0x0053dceb
0053dccf  MOV ECX,dword ptr [EBP + -0x10]
0053dcd2  CALL 0x0063aac0
0053dcd7  MOV EDX,dword ptr [EAX]
0053dcd9  MOV dword ptr [EBP + -0xc],EDX
0053dcdc  CMP dword ptr [EBP + -0xc],0x3
0053dce0  JZ 0x0053dceb
0053dce2  MOV dword ptr [EBP + -0x24],0x0
0053dce9  JMP 0x0053dcf2
0053dceb  MOV dword ptr [EBP + -0x24],0x1
0053dcf2  MOVZX EAX,byte ptr [EBP + -0x24]
0053dcf6  TEST EAX,EAX
0053dcf8  JZ 0x0053dd66
0053dcfa  PUSH -0x1
0053dcfc  MOV ECX,dword ptr [0x007947e0]
0053dd02  CALL 0x005df700
0053dd07  MOVZX ECX,AL
0053dd0a  TEST ECX,ECX
0053dd0c  JZ 0x0053dd31
0053dd0e  PUSH 0x738ad0
0053dd13  PUSH 0xb
0053dd15  MOV ECX,dword ptr [0x00793578]
0053dd1b  CALL 0x0057ab80
0053dd20  MOV EDX,dword ptr [EBP + 0x8]
0053dd23  PUSH EDX
0053dd24  MOV ECX,dword ptr [0x007933ec]
0053dd2a  CALL 0x00541e90
0053dd2f  JMP 0x0053dd3c
0053dd31  MOV ECX,dword ptr [0x00793578]
0053dd37  CALL 0x0057ae30
0053dd3c  MOV EAX,[0x007933ec]
0053dd41  MOV dword ptr [EBP + -0x14],EAX
0053dd44  MOV ECX,dword ptr [EBP + -0x14]
0053dd47  ADD ECX,dword ptr [EBP + 0x8]
0053dd4a  MOV byte ptr [ECX + 0xed],0x1
0053dd51  MOV ECX,dword ptr [0x007933f4]
0053dd57  CALL 0x0053b970
0053dd5c  JMP 0x0053de26
0053dd66  MOV ECX,dword ptr [0x00793578]
0053dd6c  CALL 0x0057ae30
0053dd71  MOV EDX,dword ptr [EBP + -0x20]
0053dd74  MOVZX EAX,byte ptr [EDX + 0x8]
0053dd78  TEST EAX,EAX
0053dd7a  JNZ 0x0053dda1
0053dd7c  MOV ECX,dword ptr [EBP + -0x20]
0053dd7f  MOV byte ptr [ECX + 0x8],0x1
0053dd83  PUSH 0x2
0053dd85  MOV ECX,dword ptr [0x0162ee84]
0053dd8b  CALL 0x00637810
0053dd90  PUSH EAX
0053dd91  MOV ECX,dword ptr [0x007933e8]
0053dd97  CALL 0x005da360
0053dd9c  JMP 0x0053de26
0053dda1  MOV EDX,dword ptr [EBP + -0x20]
0053dda4  MOV byte ptr [EDX + 0x8],0x0
0053dda8  MOV EAX,dword ptr [EBP + 0x8]
0053ddab  PUSH EAX
0053ddac  MOV ECX,dword ptr [0x007933f8]
0053ddb2  CALL 0x00539f40
0053ddb7  MOV byte ptr [EBP + -0x1],AL
0053ddba  MOV CL,byte ptr [EBP + -0x1]
0053ddbd  PUSH ECX
0053ddbe  MOV EDX,dword ptr [EBP + 0x8]
0053ddc1  PUSH EDX
0053ddc2  MOV ECX,dword ptr [0x007933ec]
0053ddc8  CALL 0x00541360
0053ddcd  MOV EAX,[0x007933ec]
0053ddd2  MOV dword ptr [EBP + -0x18],EAX
0053ddd5  MOVZX ECX,byte ptr [EBP + -0x1]
0053ddd9  NEG ECX
0053dddb  SBB ECX,ECX
0053dddd  NEG ECX
0053dddf  MOV EDX,dword ptr [EBP + -0x18]
0053dde2  MOV dword ptr [EDX + 0x100],ECX
0053dde8  MOV EAX,dword ptr [EBP + -0x18]
0053ddeb  MOV ECX,dword ptr [EBP + 0x8]
0053ddee  MOV dword ptr [EAX + 0x104],ECX
0053ddf4  MOV EDX,dword ptr [0x007933ec]
0053ddfa  MOV dword ptr [EBP + -0x1c],EDX
0053ddfd  MOV EAX,dword ptr [EBP + -0x1c]
0053de00  ADD EAX,dword ptr [EBP + 0x8]
0053de03  MOV byte ptr [EAX + 0xf2],0x1
0053de0a  PUSH 0x0
0053de0c  PUSH 0x1
0053de0e  MOV ECX,dword ptr [0x007933e8]
0053de14  MOV EDX,dword ptr [ECX + 0x4]
0053de17  MOV EAX,[0x007933e8]
0053de1c  MOV ECX,dword ptr [EAX + 0x4]
0053de1f  MOV EDX,dword ptr [EDX]
0053de21  MOV EAX,dword ptr [EDX + 0x8]
0053de24  CALL EAX
0053de26  MOV ESP,EBP
0053de28  POP EBP
0053de29  RET 0x4
