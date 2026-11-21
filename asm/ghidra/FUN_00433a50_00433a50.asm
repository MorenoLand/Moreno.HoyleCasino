; FUN_00433a50  00433a50
00433a50  PUSH EBP
00433a51  MOV EBP,ESP
00433a53  SUB ESP,0xc
00433a56  MOV dword ptr [EBP + -0xc],ECX
00433a59  PUSH -0x1
00433a5b  MOV ECX,dword ptr [0x007947e0]
00433a61  CALL 0x005de600
00433a66  MOV ECX,EAX
00433a68  CALL 0x0063aae0
00433a6d  MOV dword ptr [EBP + -0x4],EAX
00433a70  MOV EAX,dword ptr [EBP + 0x8]
00433a73  MOV dword ptr [EBP + -0x8],EAX
00433a76  CMP dword ptr [EBP + 0x8],0x0
00433a7a  JZ 0x00433a82
00433a7c  CMP dword ptr [EBP + -0x4],0x0
00433a80  JNZ 0x00433a86
00433a82  XOR AL,AL
00433a84  JMP 0x00433ada
00433a86  MOV ECX,dword ptr [EBP + -0x4]
00433a89  MOV EDX,dword ptr [EBP + -0x8]
00433a8c  MOV AL,byte ptr [EDX]
00433a8e  MOV byte ptr [ECX],AL
00433a90  MOV ECX,dword ptr [EBP + -0x4]
00433a93  MOV EDX,dword ptr [EBP + -0x8]
00433a96  MOV AL,byte ptr [EDX + 0x1]
00433a99  MOV byte ptr [ECX + 0x1],AL
00433a9c  MOV ECX,dword ptr [EBP + -0x4]
00433a9f  MOV EDX,dword ptr [EBP + -0x8]
00433aa2  MOV AL,byte ptr [EDX + 0x2]
00433aa5  MOV byte ptr [ECX + 0x2],AL
00433aa8  MOV ECX,dword ptr [EBP + -0x4]
00433aab  MOV EDX,dword ptr [EBP + -0x8]
00433aae  MOV AL,byte ptr [EDX + 0x3]
00433ab1  MOV byte ptr [ECX + 0x3],AL
00433ab4  MOV ECX,dword ptr [EBP + -0x4]
00433ab7  MOV EDX,dword ptr [EBP + -0x8]
00433aba  MOV AL,byte ptr [EDX + 0x4]
00433abd  MOV byte ptr [ECX + 0x4],AL
00433ac0  MOV ECX,dword ptr [EBP + -0x4]
00433ac3  MOV EDX,dword ptr [EBP + -0x8]
00433ac6  MOV AL,byte ptr [EDX + 0x5]
00433ac9  MOV byte ptr [ECX + 0x5],AL
00433acc  MOV ECX,dword ptr [EBP + -0x4]
00433acf  MOV EDX,dword ptr [EBP + -0x8]
00433ad2  MOV AL,byte ptr [EDX + 0x6]
00433ad5  MOV byte ptr [ECX + 0x6],AL
00433ad8  MOV AL,0x1
00433ada  MOV ESP,EBP
00433adc  POP EBP
00433add  RET 0x4
