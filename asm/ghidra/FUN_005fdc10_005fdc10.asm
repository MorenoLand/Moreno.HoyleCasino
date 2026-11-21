; FUN_005fdc10  005fdc10
005fdc10  PUSH EBP
005fdc11  MOV EBP,ESP
005fdc13  SUB ESP,0x14
005fdc16  MOV dword ptr [EBP + -0xc],ECX
005fdc19  MOV dword ptr [EBP + -0x4],0x0
005fdc20  MOV EAX,dword ptr [EBP + -0xc]
005fdc23  ADD EAX,0x1c4
005fdc28  PUSH EAX
005fdc29  MOV ECX,dword ptr [EBP + 0x8]
005fdc2c  PUSH ECX
005fdc2d  MOV EDX,dword ptr [0x015e55e4]
005fdc33  MOV EAX,dword ptr [EDX]
005fdc35  MOV ECX,dword ptr [0x015e55e4]
005fdc3b  MOV EDX,dword ptr [EAX + 0x44]
005fdc3e  CALL EDX
005fdc40  MOV ECX,dword ptr [EBP + -0xc]
005fdc43  CALL 0x005fe7f0
005fdc48  MOV dword ptr [EBP + -0x8],EAX
005fdc4b  PUSH 0x0
005fdc4d  PUSH 0xff
005fdc52  PUSH 0x0
005fdc54  PUSH 0x1
005fdc56  PUSH 0x0
005fdc58  PUSH 0x0
005fdc5a  MOV EAX,dword ptr [EBP + -0x8]
005fdc5d  PUSH EAX
005fdc5e  PUSH 0x0
005fdc60  PUSH 0x0
005fdc62  MOV ECX,dword ptr [EBP + -0xc]
005fdc65  CALL 0x005f9ce0
005fdc6a  PUSH 0x0
005fdc6c  MOV ECX,dword ptr [EBP + -0xc]
005fdc6f  CALL 0x005fb2b0
005fdc74  MOV dword ptr [EBP + -0x10],EAX
005fdc77  PUSH 0x4
005fdc79  MOV ECX,dword ptr [EBP + -0x10]
005fdc7c  MOV EDX,dword ptr [ECX]
005fdc7e  MOV ECX,dword ptr [EBP + -0x10]
005fdc81  MOV EAX,dword ptr [EDX + 0xb0]
005fdc87  CALL EAX
005fdc89  MOV ECX,dword ptr [EBP + -0x4]
005fdc8c  MOV EDX,dword ptr [EBP + -0xc]
005fdc8f  CMP dword ptr [EDX + ECX*0x4 + 0x1c8],-0x1
005fdc97  JZ 0x005fdcc2
005fdc99  PUSH 0x1
005fdc9b  PUSH -0x2
005fdc9d  MOV EAX,dword ptr [EBP + -0x8]
005fdca0  PUSH EAX
005fdca1  MOV ECX,dword ptr [EBP + -0x4]
005fdca4  MOV EDX,dword ptr [EBP + -0xc]
005fdca7  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1c8]
005fdcae  PUSH EAX
005fdcaf  MOV ECX,dword ptr [EBP + -0xc]
005fdcb2  CALL 0x005fe240
005fdcb7  MOV ECX,dword ptr [EBP + -0x4]
005fdcba  ADD ECX,0x1
005fdcbd  MOV dword ptr [EBP + -0x4],ECX
005fdcc0  JMP 0x005fdc89
005fdcc2  PUSH 0x0
005fdcc4  PUSH 0xff
005fdcc9  PUSH 0x0
005fdccb  PUSH 0x1
005fdccd  PUSH 0x0
005fdccf  PUSH 0x0
005fdcd1  MOV EDX,dword ptr [EBP + -0x8]
005fdcd4  PUSH EDX
005fdcd5  PUSH 0x1
005fdcd7  PUSH 0x0
005fdcd9  MOV ECX,dword ptr [EBP + -0xc]
005fdcdc  CALL 0x005f9ce0
005fdce1  PUSH 0x1
005fdce3  MOV ECX,dword ptr [EBP + -0xc]
005fdce6  CALL 0x005fb2b0
005fdceb  MOV dword ptr [EBP + -0x14],EAX
005fdcee  PUSH 0x5
005fdcf0  MOV EAX,dword ptr [EBP + -0x14]
005fdcf3  MOV EDX,dword ptr [EAX]
005fdcf5  MOV ECX,dword ptr [EBP + -0x14]
005fdcf8  MOV EAX,dword ptr [EDX + 0xb0]
005fdcfe  CALL EAX
005fdd00  MOV ECX,dword ptr [EBP + -0xc]
005fdd03  CALL 0x005fdd10
005fdd08  MOV ESP,EBP
005fdd0a  POP EBP
005fdd0b  RET 0x4
