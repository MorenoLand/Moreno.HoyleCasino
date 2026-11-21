; FUN_0044fb20  0044fb20
0044fb20  PUSH EBP
0044fb21  MOV EBP,ESP
0044fb23  SUB ESP,0x2b0
0044fb29  PUSH ESI
0044fb2a  PUSH EDI
0044fb2b  MOV dword ptr [EBP + 0xfffffd50],ECX
0044fb31  MOV dword ptr [EBP + 0xfffffd5c],0x0
0044fb3b  MOV dword ptr [EBP + 0xfffffd58],0x0
0044fb45  MOV dword ptr [EBP + 0xfffffd54],0x0
0044fb4f  MOV dword ptr [EBP + 0xfffffd60],0x0
0044fb59  MOV dword ptr [EBP + 0xfffffd64],0x0
0044fb63  JMP 0x0044fb74
0044fb65  MOV EAX,dword ptr [EBP + 0xfffffd64]
0044fb6b  ADD EAX,0x1
0044fb6e  MOV dword ptr [EBP + 0xfffffd64],EAX
0044fb74  CMP dword ptr [EBP + 0xfffffd64],0xf
0044fb7b  JGE 0x0044fba9
0044fb7d  MOV ECX,dword ptr [EBP + 0xfffffd64]
0044fb83  IMUL ECX,ECX,0x2c
0044fb86  MOV EDX,dword ptr [EBP + 0xfffffd50]
0044fb8c  LEA ESI,[EDX + ECX*0x1 + 0x18]
0044fb90  MOV EAX,dword ptr [EBP + 0xfffffd64]
0044fb96  IMUL EAX,EAX,0x2c
0044fb99  LEA EDI,[EBP + EAX*0x1 + 0xfffffd68]
0044fba0  MOV ECX,0xb
0044fba5  MOVSD.REP ES:EDI,ESI
0044fba7  JMP 0x0044fb65
0044fba9  MOV ECX,dword ptr [EBP + 0xfffffd50]
0044fbaf  MOVZX EDX,byte ptr [ECX + 0x2be]
0044fbb6  TEST EDX,EDX
0044fbb8  JZ 0x0044fbd2
0044fbba  MOV EAX,dword ptr [EBP + 0xfffffd94]
0044fbc0  SUB EAX,0x1
0044fbc3  MOV dword ptr [EBP + 0xfffffd94],EAX
0044fbc9  MOV ECX,dword ptr [EBP + -0x30]
0044fbcc  SUB ECX,0x1
0044fbcf  MOV dword ptr [EBP + -0x30],ECX
0044fbd2  MOV dword ptr [EBP + 0xfffffd64],0x1
0044fbdc  JMP 0x0044fbed
0044fbde  MOV EDX,dword ptr [EBP + 0xfffffd64]
0044fbe4  ADD EDX,0x1
0044fbe7  MOV dword ptr [EBP + 0xfffffd64],EDX
0044fbed  CMP dword ptr [EBP + 0xfffffd64],0xf
0044fbf4  JGE 0x0044fc69
0044fbf6  MOV EAX,dword ptr [EBP + 0xfffffd64]
0044fbfc  IMUL EAX,EAX,0x2c
0044fbff  CMP dword ptr [EBP + EAX*0x1 + 0xfffffd68],0x0
0044fc07  JZ 0x0044fc50
0044fc09  CMP dword ptr [EBP + 0xfffffd54],0x0
0044fc10  JNZ 0x0044fc1e
0044fc12  MOV ECX,dword ptr [EBP + 0xfffffd64]
0044fc18  MOV dword ptr [EBP + 0xfffffd5c],ECX
0044fc1e  MOV EDX,dword ptr [EBP + 0xfffffd54]
0044fc24  ADD EDX,0x1
0044fc27  MOV dword ptr [EBP + 0xfffffd54],EDX
0044fc2d  CMP dword ptr [EBP + 0xfffffd54],0x5
0044fc34  JL 0x0044fc4e
0044fc36  MOV EAX,dword ptr [EBP + 0xfffffd54]
0044fc3c  MOV dword ptr [EBP + 0xfffffd60],EAX
0044fc42  MOV ECX,dword ptr [EBP + 0xfffffd5c]
0044fc48  MOV dword ptr [EBP + 0xfffffd58],ECX
0044fc4e  JMP 0x0044fc64
0044fc50  MOV dword ptr [EBP + 0xfffffd54],0x0
0044fc5a  MOV dword ptr [EBP + 0xfffffd5c],0x0
0044fc64  JMP 0x0044fbde
0044fc69  CMP dword ptr [EBP + 0xfffffd60],0x5
0044fc70  JL 0x0044fe4d
0044fc76  MOV EDX,dword ptr [EBP + 0xfffffd50]
0044fc7c  MOV EAX,dword ptr [EBP + 0xfffffd60]
0044fc82  MOV dword ptr [EDX + 0x2f4],EAX
0044fc88  MOV ECX,dword ptr [EBP + 0xfffffd50]
0044fc8e  MOV EDX,dword ptr [EBP + 0xfffffd58]
0044fc94  MOV dword ptr [ECX + 0x2f8],EDX
0044fc9a  MOV EAX,dword ptr [EBP + 0xfffffd50]
0044fca0  MOVZX ECX,byte ptr [EAX + 0x2be]
0044fca7  TEST ECX,ECX
0044fca9  JZ 0x0044fdf3
0044fcaf  CMP dword ptr [EBP + 0xfffffd58],0x2
0044fcb6  JLE 0x0044fd24
0044fcb8  MOV EDX,dword ptr [EBP + 0xfffffd58]
0044fcbe  SUB EDX,0x2
0044fcc1  IMUL EDX,EDX,0x2c
0044fcc4  CMP dword ptr [EBP + EDX*0x1 + 0xfffffd68],0x0
0044fccc  JLE 0x0044fd24
0044fcce  MOV EAX,dword ptr [EBP + 0xfffffd50]
0044fcd4  MOV ECX,dword ptr [EAX + 0x2f8]
0044fcda  SUB ECX,0x2
0044fcdd  MOV EDX,dword ptr [EBP + 0xfffffd50]
0044fce3  MOV dword ptr [EDX + 0x2f8],ECX
0044fce9  MOV EAX,dword ptr [EBP + 0xfffffd50]
0044fcef  MOV ECX,dword ptr [EAX + 0x2f8]
0044fcf5  ADD ECX,0x1
0044fcf8  MOV EDX,dword ptr [EBP + 0xfffffd50]
0044fcfe  MOV dword ptr [EDX + 0x2fc],ECX
0044fd04  MOV EAX,dword ptr [EBP + 0xfffffd50]
0044fd0a  MOV ECX,dword ptr [EAX + 0x2f4]
0044fd10  ADD ECX,0x1
0044fd13  MOV EDX,dword ptr [EBP + 0xfffffd50]
0044fd19  MOV dword ptr [EDX + 0x2f4],ECX
0044fd1f  JMP 0x0044fdd8
0044fd24  MOV EAX,dword ptr [EBP + 0xfffffd50]
0044fd2a  MOV ECX,dword ptr [EAX + 0x2f4]
0044fd30  MOV EDX,dword ptr [EBP + 0xfffffd58]
0044fd36  LEA EAX,[EDX + ECX*0x1 + -0x1]
0044fd3a  CMP EAX,0xe
0044fd3d  JNZ 0x0044fd74
0044fd3f  MOV ECX,dword ptr [EBP + 0xfffffd50]
0044fd45  MOV EDX,dword ptr [ECX + 0x2f8]
0044fd4b  SUB EDX,0x1
0044fd4e  MOV EAX,dword ptr [EBP + 0xfffffd50]
0044fd54  MOV dword ptr [EAX + 0x2f8],EDX
0044fd5a  MOV ECX,dword ptr [EBP + 0xfffffd50]
0044fd60  MOV EDX,dword ptr [EBP + 0xfffffd50]
0044fd66  MOV EAX,dword ptr [EDX + 0x2f8]
0044fd6c  MOV dword ptr [ECX + 0x2fc],EAX
0044fd72  JMP 0x0044fdd8
0044fd74  MOV ECX,dword ptr [EBP + 0xfffffd50]
0044fd7a  MOV EDX,dword ptr [EBP + 0xfffffd58]
0044fd80  ADD EDX,dword ptr [ECX + 0x2f4]
0044fd86  MOV EAX,dword ptr [EBP + 0xfffffd50]
0044fd8c  MOV dword ptr [EAX + 0x2fc],EDX
0044fd92  MOV ECX,dword ptr [EBP + 0xfffffd50]
0044fd98  CMP dword ptr [ECX + 0x2fc],0xe
0044fd9f  JGE 0x0044fdd8
0044fda1  MOV EDX,dword ptr [EBP + 0xfffffd50]
0044fda7  MOV EAX,dword ptr [EDX + 0x2fc]
0044fdad  ADD EAX,0x1
0044fdb0  IMUL EAX,EAX,0x2c
0044fdb3  CMP dword ptr [EBP + EAX*0x1 + 0xfffffd68],0x0
0044fdbb  JLE 0x0044fdd8
0044fdbd  MOV ECX,dword ptr [EBP + 0xfffffd50]
0044fdc3  MOV EDX,dword ptr [ECX + 0x2f4]
0044fdc9  ADD EDX,0x1
0044fdcc  MOV EAX,dword ptr [EBP + 0xfffffd50]
0044fdd2  MOV dword ptr [EAX + 0x2f4],EDX
0044fdd8  MOV ECX,dword ptr [EBP + 0xfffffd50]
0044fdde  MOV EDX,dword ptr [ECX + 0x2f4]
0044fde4  ADD EDX,0x1
0044fde7  MOV EAX,dword ptr [EBP + 0xfffffd50]
0044fded  MOV dword ptr [EAX + 0x2f4],EDX
0044fdf3  MOV dword ptr [EBP + 0xfffffd64],0x0
0044fdfd  JMP 0x0044fe0e
0044fdff  MOV ECX,dword ptr [EBP + 0xfffffd64]
0044fe05  ADD ECX,0x1
0044fe08  MOV dword ptr [EBP + 0xfffffd64],ECX
0044fe0e  MOV EDX,dword ptr [EBP + 0xfffffd50]
0044fe14  MOV EAX,dword ptr [EBP + 0xfffffd64]
0044fe1a  CMP EAX,dword ptr [EDX + 0x2f4]
0044fe20  JGE 0x0044fe49
0044fe22  MOV ECX,dword ptr [EBP + 0xfffffd50]
0044fe28  MOV EDX,dword ptr [ECX + 0x2f8]
0044fe2e  ADD EDX,dword ptr [EBP + 0xfffffd64]
0044fe34  MOV EAX,dword ptr [EBP + 0xfffffd64]
0044fe3a  MOV ECX,dword ptr [EBP + 0xfffffd50]
0044fe40  MOV dword ptr [ECX + EAX*0x4 + 0x2d8],EDX
0044fe47  JMP 0x0044fdff
0044fe49  MOV AL,0x1
0044fe4b  JMP 0x0044fe4f
0044fe4d  XOR AL,AL
0044fe4f  POP EDI
0044fe50  POP ESI
0044fe51  MOV ESP,EBP
0044fe53  POP EBP
0044fe54  RET
