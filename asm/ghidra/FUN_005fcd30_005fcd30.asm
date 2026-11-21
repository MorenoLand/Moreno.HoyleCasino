; FUN_005fcd30  005fcd30
005fcd30  PUSH EBP
005fcd31  MOV EBP,ESP
005fcd33  SUB ESP,0xc
005fcd36  PUSH ESI
005fcd37  MOV dword ptr [EBP + -0xc],ECX
005fcd3a  MOV ECX,dword ptr [EBP + -0xc]
005fcd3d  CALL 0x006026d0
005fcd42  PUSH EAX
005fcd43  MOV ECX,dword ptr [EBP + -0xc]
005fcd46  CALL 0x005f5400
005fcd4b  PUSH EAX
005fcd4c  MOV EAX,[0x015e55e4]
005fcd51  MOV EDX,dword ptr [EAX]
005fcd53  MOV ECX,dword ptr [0x015e55e4]
005fcd59  MOV EAX,dword ptr [EDX + 0x50]
005fcd5c  CALL EAX
005fcd5e  MOV byte ptr [EBP + -0x1],AL
005fcd61  MOVZX ESI,byte ptr [EBP + -0x1]
005fcd65  MOV ECX,dword ptr [EBP + -0xc]
005fcd68  CALL 0x006026d0
005fcd6d  MOVZX ECX,AL
005fcd70  CMP ESI,ECX
005fcd72  JZ 0x005fcd9e
005fcd74  MOVZX EDX,byte ptr [EBP + -0x1]
005fcd78  TEST EDX,EDX
005fcd7a  JZ 0x005fcd8e
005fcd7c  MOV EAX,dword ptr [EBP + -0xc]
005fcd7f  MOV EDX,dword ptr [EAX]
005fcd81  MOV ECX,dword ptr [EBP + -0xc]
005fcd84  MOV EAX,dword ptr [EDX + 0xcc]
005fcd8a  CALL EAX
005fcd8c  JMP 0x005fcd9e
005fcd8e  MOV ECX,dword ptr [EBP + -0xc]
005fcd91  MOV EDX,dword ptr [ECX]
005fcd93  MOV ECX,dword ptr [EBP + -0xc]
005fcd96  MOV EAX,dword ptr [EDX + 0xd0]
005fcd9c  CALL EAX
005fcd9e  MOV ECX,dword ptr [EBP + -0xc]
005fcda1  CALL 0x00602500
005fcda6  MOV ECX,dword ptr [EBP + -0xc]
005fcda9  CALL 0x005f5400
005fcdae  CMP EAX,-0x2
005fcdb1  JNZ 0x005fcdc6
005fcdb3  PUSH 0x0
005fcdb5  PUSH 0x0
005fcdb7  PUSH 0x0
005fcdb9  MOV ECX,dword ptr [EBP + -0xc]
005fcdbc  CALL 0x00603190
005fcdc1  JMP 0x005fcf56
005fcdc6  MOV ECX,dword ptr [EBP + -0xc]
005fcdc9  CMP dword ptr [ECX + 0x1f8],0x0
005fcdd0  JZ 0x005fce20
005fcdd2  MOV EDX,dword ptr [EBP + -0xc]
005fcdd5  MOV EAX,dword ptr [EDX]
005fcdd7  MOV ECX,dword ptr [EBP + -0xc]
005fcdda  MOV EDX,dword ptr [EAX + 0x54]
005fcddd  CALL EDX
005fcddf  PUSH EAX
005fcde0  MOV EAX,dword ptr [EBP + -0xc]
005fcde3  MOV EDX,dword ptr [EAX]
005fcde5  MOV ECX,dword ptr [EBP + -0xc]
005fcde8  MOV EAX,dword ptr [EDX + 0x4c]
005fcdeb  CALL EAX
005fcded  PUSH EAX
005fcdee  MOV ECX,dword ptr [EBP + -0xc]
005fcdf1  MOV EDX,dword ptr [ECX + 0x1f8]
005fcdf7  MOV EAX,dword ptr [EBP + -0xc]
005fcdfa  MOV ECX,dword ptr [EAX + 0x1f8]
005fce00  MOV EDX,dword ptr [EDX]
005fce02  MOV EAX,dword ptr [EDX + 0x44]
005fce05  CALL EAX
005fce07  MOV ECX,dword ptr [EBP + -0xc]
005fce0a  MOV EDX,dword ptr [ECX + 0x1f8]
005fce10  MOV EAX,dword ptr [EBP + -0xc]
005fce13  MOV ECX,dword ptr [EAX + 0x1f8]
005fce19  MOV EDX,dword ptr [EDX]
005fce1b  MOV EAX,dword ptr [EDX + 0x74]
005fce1e  CALL EAX
005fce20  MOV ECX,dword ptr [EBP + -0xc]
005fce23  CMP dword ptr [ECX + 0x1f4],0x0
005fce2a  JZ 0x005fce9c
005fce2c  MOV EDX,dword ptr [EBP + -0xc]
005fce2f  MOV EAX,dword ptr [EDX]
005fce31  MOV ECX,dword ptr [EBP + -0xc]
005fce34  MOV EDX,dword ptr [EAX + 0x54]
005fce37  CALL EDX
005fce39  SUB EAX,0x1
005fce3c  PUSH EAX
005fce3d  MOV EAX,dword ptr [EBP + -0xc]
005fce40  MOV EDX,dword ptr [EAX]
005fce42  MOV ECX,dword ptr [EBP + -0xc]
005fce45  MOV EAX,dword ptr [EDX + 0x4c]
005fce48  CALL EAX
005fce4a  MOV ESI,EAX
005fce4c  MOV ECX,dword ptr [EBP + -0xc]
005fce4f  CALL 0x005f5550
005fce54  ADD ESI,EAX
005fce56  MOV ECX,dword ptr [EBP + -0xc]
005fce59  MOV ECX,dword ptr [ECX + 0x1f4]
005fce5f  CALL 0x005f5550
005fce64  SUB ESI,EAX
005fce66  SUB ESI,0xa
005fce69  PUSH ESI
005fce6a  MOV EDX,dword ptr [EBP + -0xc]
005fce6d  MOV EAX,dword ptr [EDX + 0x1f4]
005fce73  MOV ECX,dword ptr [EBP + -0xc]
005fce76  MOV ECX,dword ptr [ECX + 0x1f4]
005fce7c  MOV EDX,dword ptr [EAX]
005fce7e  MOV EAX,dword ptr [EDX + 0x44]
005fce81  CALL EAX
005fce83  MOV ECX,dword ptr [EBP + -0xc]
005fce86  MOV EDX,dword ptr [ECX + 0x1f4]
005fce8c  MOV EAX,dword ptr [EBP + -0xc]
005fce8f  MOV ECX,dword ptr [EAX + 0x1f4]
005fce95  MOV EDX,dword ptr [EDX]
005fce97  MOV EAX,dword ptr [EDX + 0x74]
005fce9a  CALL EAX
005fce9c  MOV ECX,dword ptr [EBP + -0xc]
005fce9f  CMP dword ptr [ECX + 0x200],0x0
005fcea6  JZ 0x005fcf56
005fceac  MOV EDX,dword ptr [EBP + -0xc]
005fceaf  MOV EAX,dword ptr [EDX]
005fceb1  MOV ECX,dword ptr [EBP + -0xc]
005fceb4  MOV EDX,dword ptr [EAX + 0x54]
005fceb7  CALL EDX
005fceb9  SUB EAX,0x1
005fcebc  PUSH EAX
005fcebd  MOV EAX,dword ptr [EBP + -0xc]
005fcec0  MOV EDX,dword ptr [EAX]
005fcec2  MOV ECX,dword ptr [EBP + -0xc]
005fcec5  MOV EAX,dword ptr [EDX + 0x4c]
005fcec8  CALL EAX
005fceca  MOV ESI,EAX
005fcecc  MOV ECX,dword ptr [EBP + -0xc]
005fcecf  CALL 0x005f5550
005fced4  ADD ESI,EAX
005fced6  MOV ECX,dword ptr [EBP + -0xc]
005fced9  MOV ECX,dword ptr [ECX + 0x200]
005fcedf  CALL 0x005f5550
005fcee4  SUB ESI,EAX
005fcee6  SUB ESI,0xa
005fcee9  PUSH ESI
005fceea  MOV EDX,dword ptr [EBP + -0xc]
005fceed  MOV EAX,dword ptr [EDX + 0x200]
005fcef3  MOV ECX,dword ptr [EBP + -0xc]
005fcef6  MOV ECX,dword ptr [ECX + 0x200]
005fcefc  MOV EDX,dword ptr [EAX]
005fcefe  MOV EAX,dword ptr [EDX + 0x44]
005fcf01  CALL EAX
005fcf03  MOV ECX,dword ptr [EBP + -0xc]
005fcf06  MOV EDX,dword ptr [ECX + 0x190]
005fcf0c  MOV EAX,dword ptr [EDX + 0x60]
005fcf0f  MOV dword ptr [EBP + -0x8],EAX
005fcf12  PUSH ECX
005fcf13  MOV ECX,ESP
005fcf15  MOV DX,word ptr [0x0075ee1c]
005fcf1c  MOV word ptr [ECX],DX
005fcf1f  MOV AL,[0x0075ee1e]
005fcf24  MOV byte ptr [ECX + 0x2],AL
005fcf27  PUSH -0x1
005fcf29  MOV ECX,dword ptr [EBP + -0x8]
005fcf2c  PUSH ECX
005fcf2d  MOV EDX,dword ptr [EBP + -0xc]
005fcf30  MOV ECX,dword ptr [EDX + 0x200]
005fcf36  CALL 0x005ecd00
005fcf3b  MOV EAX,dword ptr [EBP + -0xc]
005fcf3e  MOV ECX,dword ptr [EAX + 0x200]
005fcf44  MOV EDX,dword ptr [EBP + -0xc]
005fcf47  MOV EAX,dword ptr [EDX + 0x200]
005fcf4d  MOV EDX,dword ptr [ECX]
005fcf4f  MOV ECX,EAX
005fcf51  MOV EAX,dword ptr [EDX + 0x74]
005fcf54  CALL EAX
005fcf56  POP ESI
005fcf57  MOV ESP,EBP
005fcf59  POP EBP
005fcf5a  RET
