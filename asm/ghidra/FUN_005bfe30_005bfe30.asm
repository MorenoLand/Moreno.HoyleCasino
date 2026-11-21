; FUN_005bfe30  005bfe30
005bfe30  PUSH EBP
005bfe31  MOV EBP,ESP
005bfe33  SUB ESP,0x30
005bfe36  MOV dword ptr [EBP + -0x28],ECX
005bfe39  MOV EAX,dword ptr [EBP + -0x28]
005bfe3c  CMP dword ptr [EAX + 0x4],0x0
005bfe40  JNZ 0x005bfe4b
005bfe42  MOV dword ptr [EBP + -0x2c],0x0
005bfe49  JMP 0x005bfe5d
005bfe4b  MOV ECX,dword ptr [EBP + -0x28]
005bfe4e  MOV EDX,dword ptr [EBP + -0x28]
005bfe51  MOV EAX,dword ptr [ECX + 0x8]
005bfe54  SUB EAX,dword ptr [EDX + 0x4]
005bfe57  SAR EAX,0x2
005bfe5a  MOV dword ptr [EBP + -0x2c],EAX
005bfe5d  CMP dword ptr [EBP + -0x2c],0x0
005bfe61  JNZ 0x005bfe6c
005bfe63  MOV dword ptr [EBP + -0x30],0x0
005bfe6a  JMP 0x005bfeca
005bfe6c  MOV ECX,dword ptr [EBP + -0x28]
005bfe6f  MOV EDX,dword ptr [ECX + 0x4]
005bfe72  MOV dword ptr [EBP + -0x18],EDX
005bfe75  MOV dword ptr [EBP + -0xc],0x0
005bfe7c  CMP dword ptr [EBP + -0x28],0x0
005bfe80  JZ 0x005bfe98
005bfe82  MOV EAX,dword ptr [EBP + -0x28]
005bfe85  MOV ECX,dword ptr [EAX + 0x4]
005bfe88  CMP ECX,dword ptr [EBP + -0x18]
005bfe8b  JA 0x005bfe98
005bfe8d  MOV EDX,dword ptr [EBP + -0x28]
005bfe90  MOV EAX,dword ptr [EBP + -0x18]
005bfe93  CMP EAX,dword ptr [EDX + 0x8]
005bfe96  JBE 0x005bfe9e
005bfe98  CALL dword ptr [0x006b2274]
005bfe9e  MOV ECX,dword ptr [EBP + -0x28]
005bfea1  MOV dword ptr [EBP + -0xc],ECX
005bfea4  MOV EDX,dword ptr [EBP + -0x18]
005bfea7  MOV dword ptr [EBP + -0x8],EDX
005bfeaa  CMP dword ptr [EBP + 0xc],0x0
005bfeae  JZ 0x005bfeb8
005bfeb0  MOV EAX,dword ptr [EBP + 0xc]
005bfeb3  CMP EAX,dword ptr [EBP + -0xc]
005bfeb6  JZ 0x005bfebe
005bfeb8  CALL dword ptr [0x006b2274]
005bfebe  MOV ECX,dword ptr [EBP + 0x10]
005bfec1  SUB ECX,dword ptr [EBP + -0x8]
005bfec4  SAR ECX,0x2
005bfec7  MOV dword ptr [EBP + -0x30],ECX
005bfeca  MOV EDX,dword ptr [EBP + -0x30]
005bfecd  MOV dword ptr [EBP + -0x4],EDX
005bfed0  MOV EAX,dword ptr [EBP + 0x14]
005bfed3  PUSH EAX
005bfed4  PUSH 0x1
005bfed6  MOV ECX,dword ptr [EBP + 0x10]
005bfed9  PUSH ECX
005bfeda  MOV EDX,dword ptr [EBP + 0xc]
005bfedd  PUSH EDX
005bfede  MOV ECX,dword ptr [EBP + -0x28]
005bfee1  CALL 0x005bff60
005bfee6  MOV EAX,dword ptr [EBP + -0x28]
005bfee9  MOV ECX,dword ptr [EAX + 0x4]
005bfeec  MOV dword ptr [EBP + -0x1c],ECX
005bfeef  MOV dword ptr [EBP + -0x14],0x0
005bfef6  CMP dword ptr [EBP + -0x28],0x0
005bfefa  JZ 0x005bff12
005bfefc  MOV EDX,dword ptr [EBP + -0x28]
005bfeff  MOV EAX,dword ptr [EDX + 0x4]
005bff02  CMP EAX,dword ptr [EBP + -0x1c]
005bff05  JA 0x005bff12
005bff07  MOV ECX,dword ptr [EBP + -0x28]
005bff0a  MOV EDX,dword ptr [EBP + -0x1c]
005bff0d  CMP EDX,dword ptr [ECX + 0x8]
005bff10  JBE 0x005bff18
005bff12  CALL dword ptr [0x006b2274]
005bff18  MOV EAX,dword ptr [EBP + -0x28]
005bff1b  MOV dword ptr [EBP + -0x14],EAX
005bff1e  MOV ECX,dword ptr [EBP + -0x1c]
005bff21  MOV dword ptr [EBP + -0x10],ECX
005bff24  MOV EDX,dword ptr [EBP + -0x14]
005bff27  MOV EAX,dword ptr [EBP + -0x10]
005bff2a  MOV dword ptr [EBP + -0x24],EDX
005bff2d  MOV dword ptr [EBP + -0x20],EAX
005bff30  MOV ECX,dword ptr [EBP + -0x4]
005bff33  PUSH ECX
005bff34  LEA ECX,[EBP + -0x24]
005bff37  CALL 0x005beeb0
005bff3c  MOV EDX,dword ptr [EBP + -0x24]
005bff3f  MOV EAX,dword ptr [EBP + -0x20]
005bff42  MOV ECX,dword ptr [EBP + 0x8]
005bff45  MOV dword ptr [ECX],EDX
005bff47  MOV dword ptr [ECX + 0x4],EAX
005bff4a  MOV EAX,dword ptr [EBP + 0x8]
005bff4d  MOV ESP,EBP
005bff4f  POP EBP
005bff50  RET 0x10
