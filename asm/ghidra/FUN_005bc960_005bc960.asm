; FUN_005bc960  005bc960
005bc960  PUSH EBP
005bc961  MOV EBP,ESP
005bc963  PUSH -0x1
005bc965  PUSH 0x6a81a3
005bc96a  MOV EAX,FS:[0x0]
005bc970  PUSH EAX
005bc971  SUB ESP,0xc8
005bc977  MOV EAX,[0x00781870]
005bc97c  XOR EAX,EBP
005bc97e  PUSH EAX
005bc97f  LEA EAX,[EBP + -0xc]
005bc982  MOV FS:[0x0],EAX
005bc988  MOV dword ptr [EBP + 0xffffff40],ECX
005bc98e  MOV EAX,dword ptr [EBP + 0xffffff40]
005bc994  MOV ECX,dword ptr [0x0162ee84]
005bc99a  MOV EDX,dword ptr [ECX + 0x14]
005bc99d  MOV dword ptr [EAX + 0x8],EDX
005bc9a0  MOV EAX,dword ptr [EBP + 0xffffff40]
005bc9a6  CMP dword ptr [EAX + 0x4],0x0
005bc9aa  JZ 0x005bc9e4
005bc9ac  MOV ECX,dword ptr [EBP + 0xffffff40]
005bc9b2  MOV EDX,dword ptr [ECX + 0x4]
005bc9b5  MOV dword ptr [EBP + -0x28],EDX
005bc9b8  MOV EAX,dword ptr [EBP + -0x28]
005bc9bb  MOV dword ptr [EBP + -0x24],EAX
005bc9be  CMP dword ptr [EBP + -0x24],0x0
005bc9c2  JZ 0x005bc9da
005bc9c4  PUSH 0x1
005bc9c6  MOV ECX,dword ptr [EBP + -0x24]
005bc9c9  MOV EDX,dword ptr [ECX]
005bc9cb  MOV ECX,dword ptr [EBP + -0x24]
005bc9ce  MOV EAX,dword ptr [EDX]
005bc9d0  CALL EAX
005bc9d2  MOV dword ptr [EBP + 0xffffff3c],EAX
005bc9d8  JMP 0x005bc9e4
005bc9da  MOV dword ptr [EBP + 0xffffff3c],0x0
005bc9e4  PUSH 0xe8
005bc9e9  CALL 0x00686d82
005bc9ee  ADD ESP,0x4
005bc9f1  MOV dword ptr [EBP + -0x30],EAX
005bc9f4  MOV dword ptr [EBP + -0x4],0x0
005bc9fb  CMP dword ptr [EBP + -0x30],0x0
005bc9ff  JZ 0x005bca11
005bca01  MOV ECX,dword ptr [EBP + -0x30]
005bca04  CALL 0x005c8bb0
005bca09  MOV dword ptr [EBP + 0xffffff38],EAX
005bca0f  JMP 0x005bca1b
005bca11  MOV dword ptr [EBP + 0xffffff38],0x0
005bca1b  MOV ECX,dword ptr [EBP + 0xffffff38]
005bca21  MOV dword ptr [EBP + -0x2c],ECX
005bca24  MOV dword ptr [EBP + -0x4],0xffffffff
005bca2b  MOV EDX,dword ptr [EBP + 0xffffff40]
005bca31  MOV EAX,dword ptr [EBP + -0x2c]
005bca34  MOV dword ptr [EDX + 0x4],EAX
005bca37  MOV ECX,dword ptr [EBP + 0x8]
005bca3a  PUSH ECX
005bca3b  MOV EDX,dword ptr [EBP + 0xffffff40]
005bca41  MOV ECX,dword ptr [EDX + 0x4]
005bca44  CALL 0x005c8c60
005bca49  PUSH 0x6d1c4c
005bca4e  CALL 0x00630f40
005bca53  ADD ESP,0x4
005bca56  PUSH EAX
005bca57  MOV ECX,dword ptr [0x0162ee84]
005bca5d  CALL 0x005f38b0
005bca62  MOV EAX,dword ptr [EBP + 0xffffff40]
005bca68  MOV ECX,dword ptr [EAX + 0x50]
005bca6b  MOV DL,byte ptr [ECX + 0x6]
005bca6e  PUSH EDX
005bca6f  MOV EAX,dword ptr [EBP + 0xffffff40]
005bca75  MOV ECX,dword ptr [EAX + 0x50]
005bca78  MOV DL,byte ptr [ECX + 0x5]
005bca7b  PUSH EDX
005bca7c  MOV EAX,dword ptr [EBP + 0xffffff40]
005bca82  MOV ECX,dword ptr [EAX + 0x50]
005bca85  MOV DL,byte ptr [ECX + 0x4]
005bca88  PUSH EDX
005bca89  MOV ECX,dword ptr [0x0162ee80]
005bca8f  CALL 0x005f1b10
005bca94  MOV EAX,dword ptr [EBP + 0xffffff40]
005bca9a  MOV dword ptr [EAX + 0xc],0x758ac0
005bcaa1  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcaa7  MOV EDX,dword ptr [ECX + 0x50]
005bcaaa  MOV EAX,dword ptr [EDX + 0x54]
005bcaad  MOV dword ptr [EBP + -0x14],EAX
005bcab0  MOV dword ptr [EBP + -0x10],0x0
005bcab7  JMP 0x005bcac2
005bcab9  MOV ECX,dword ptr [EBP + -0x10]
005bcabc  ADD ECX,0x1
005bcabf  MOV dword ptr [EBP + -0x10],ECX
005bcac2  MOV EDX,dword ptr [EBP + -0x10]
005bcac5  IMUL EDX,EDX,0x14
005bcac8  MOV EAX,dword ptr [EBP + -0x14]
005bcacb  CMP dword ptr [EAX + EDX*0x1],0x0
005bcacf  JL 0x005bcad3
005bcad1  JMP 0x005bcab9
005bcad3  PUSH 0x0
005bcad5  MOV ECX,dword ptr [EBP + -0x10]
005bcad8  PUSH ECX
005bcad9  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcadf  ADD ECX,0x58
005bcae2  CALL 0x005be4d0
005bcae7  PUSH 0x5bc6f0
005bcaec  PUSH 0x14
005bcaee  MOV EDX,dword ptr [EBP + -0x10]
005bcaf1  PUSH EDX
005bcaf2  MOV EAX,dword ptr [EBP + 0xffffff40]
005bcaf8  MOV ECX,dword ptr [EAX + 0x50]
005bcafb  MOV EDX,dword ptr [ECX + 0x54]
005bcafe  PUSH EDX
005bcaff  CALL dword ptr [0x006b2248]
005bcb05  ADD ESP,0x10
005bcb08  MOV EAX,dword ptr [EBP + 0xffffff40]
005bcb0e  MOV ECX,dword ptr [EAX + 0x50]
005bcb11  CMP dword ptr [ECX + 0x8],0x0
005bcb15  JZ 0x005bcbc4
005bcb1b  PUSH 0x178
005bcb20  CALL 0x00686d82
005bcb25  ADD ESP,0x4
005bcb28  MOV dword ptr [EBP + -0x38],EAX
005bcb2b  MOV dword ptr [EBP + -0x4],0x1
005bcb32  CMP dword ptr [EBP + -0x38],0x0
005bcb36  JZ 0x005bcb48
005bcb38  MOV ECX,dword ptr [EBP + -0x38]
005bcb3b  CALL 0x005eaaf0
005bcb40  MOV dword ptr [EBP + 0xffffff34],EAX
005bcb46  JMP 0x005bcb52
005bcb48  MOV dword ptr [EBP + 0xffffff34],0x0
005bcb52  MOV EDX,dword ptr [EBP + 0xffffff34]
005bcb58  MOV dword ptr [EBP + -0x34],EDX
005bcb5b  MOV dword ptr [EBP + -0x4],0xffffffff
005bcb62  MOV EAX,dword ptr [EBP + -0x34]
005bcb65  MOV dword ptr [EBP + -0x18],EAX
005bcb68  PUSH -0x1
005bcb6a  PUSH 0x15
005bcb6c  PUSH 0x0
005bcb6e  PUSH 0x0
005bcb70  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcb76  MOV EDX,dword ptr [ECX + 0x50]
005bcb79  MOV EAX,dword ptr [EDX + 0x8]
005bcb7c  PUSH EAX
005bcb7d  MOV ECX,dword ptr [EBP + -0x18]
005bcb80  CALL 0x005eae80
005bcb85  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcb8b  MOV EDX,dword ptr [ECX + 0x50]
005bcb8e  MOV EAX,dword ptr [EDX + 0xc]
005bcb91  PUSH EAX
005bcb92  MOV ECX,dword ptr [EBP + -0x18]
005bcb95  CALL 0x005eb000
005bcb9a  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcba0  MOV EDX,dword ptr [ECX + 0x50]
005bcba3  MOV EAX,dword ptr [EDX + 0x10]
005bcba6  PUSH EAX
005bcba7  MOV ECX,dword ptr [EBP + -0x18]
005bcbaa  MOV EDX,dword ptr [ECX]
005bcbac  MOV ECX,dword ptr [EBP + -0x18]
005bcbaf  MOV EAX,dword ptr [EDX + 0xb0]
005bcbb5  CALL EAX
005bcbb7  MOV ECX,dword ptr [EBP + -0x18]
005bcbba  MOV EDX,dword ptr [ECX]
005bcbbc  MOV ECX,dword ptr [EBP + -0x18]
005bcbbf  MOV EAX,dword ptr [EDX + 0x74]
005bcbc2  CALL EAX
005bcbc4  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcbca  MOV EDX,dword ptr [ECX + 0x50]
005bcbcd  CMP dword ptr [EDX + 0x14],0x0
005bcbd1  JZ 0x005bcca5
005bcbd7  PUSH 0x190
005bcbdc  CALL 0x00686d82
005bcbe1  ADD ESP,0x4
005bcbe4  MOV dword ptr [EBP + -0x40],EAX
005bcbe7  MOV dword ptr [EBP + -0x4],0x2
005bcbee  CMP dword ptr [EBP + -0x40],0x0
005bcbf2  JZ 0x005bcc04
005bcbf4  MOV ECX,dword ptr [EBP + -0x40]
005bcbf7  CALL 0x005f5f50
005bcbfc  MOV dword ptr [EBP + 0xffffff30],EAX
005bcc02  JMP 0x005bcc0e
005bcc04  MOV dword ptr [EBP + 0xffffff30],0x0
005bcc0e  MOV EAX,dword ptr [EBP + 0xffffff30]
005bcc14  MOV dword ptr [EBP + -0x3c],EAX
005bcc17  MOV dword ptr [EBP + -0x4],0xffffffff
005bcc1e  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcc24  MOV EDX,dword ptr [EBP + -0x3c]
005bcc27  MOV dword ptr [ECX + 0x6c],EDX
005bcc2a  MOV EAX,dword ptr [EBP + 0xffffff40]
005bcc30  MOV ECX,dword ptr [EAX + 0x6c]
005bcc33  MOV dword ptr [EBP + -0x1c],ECX
005bcc36  PUSH -0x1
005bcc38  PUSH 0x16
005bcc3a  PUSH 0x0
005bcc3c  PUSH 0x0
005bcc3e  MOV EDX,dword ptr [EBP + 0xffffff40]
005bcc44  MOV EAX,dword ptr [EDX + 0x50]
005bcc47  MOV ECX,dword ptr [EAX + 0x14]
005bcc4a  PUSH ECX
005bcc4b  MOV ECX,dword ptr [EBP + -0x1c]
005bcc4e  CALL 0x005eae80
005bcc53  MOV EDX,dword ptr [EBP + 0xffffff40]
005bcc59  MOV EAX,dword ptr [EDX + 0x50]
005bcc5c  MOV ECX,dword ptr [EAX + 0x18]
005bcc5f  PUSH ECX
005bcc60  MOV ECX,dword ptr [EBP + -0x1c]
005bcc63  CALL 0x005eb000
005bcc68  MOV EDX,dword ptr [EBP + 0xffffff40]
005bcc6e  MOV EAX,dword ptr [EDX + 0x50]
005bcc71  MOV ECX,dword ptr [EAX + 0x1c]
005bcc74  PUSH ECX
005bcc75  MOV EDX,dword ptr [EBP + -0x1c]
005bcc78  MOV EAX,dword ptr [EDX]
005bcc7a  MOV ECX,dword ptr [EBP + -0x1c]
005bcc7d  MOV EDX,dword ptr [EAX + 0xb0]
005bcc83  CALL EDX
005bcc85  MOV EAX,dword ptr [EBP + -0x1c]
005bcc88  MOV EDX,dword ptr [EAX]
005bcc8a  MOV ECX,dword ptr [EBP + -0x1c]
005bcc8d  MOV EAX,dword ptr [EDX + 0x74]
005bcc90  CALL EAX
005bcc92  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcc98  MOV EDX,dword ptr [ECX + 0x6c]
005bcc9b  MOV dword ptr [EDX + 0x178],0xf
005bcca5  MOV EAX,dword ptr [EBP + 0xffffff40]
005bccab  MOV ECX,dword ptr [EAX + 0x50]
005bccae  CMP dword ptr [ECX + 0x20],0x0
005bccb2  JZ 0x005bcd61
005bccb8  PUSH 0x178
005bccbd  CALL 0x00686d82
005bccc2  ADD ESP,0x4
005bccc5  MOV dword ptr [EBP + -0x48],EAX
005bccc8  MOV dword ptr [EBP + -0x4],0x3
005bcccf  CMP dword ptr [EBP + -0x48],0x0
005bccd3  JZ 0x005bcce5
005bccd5  MOV ECX,dword ptr [EBP + -0x48]
005bccd8  CALL 0x005eaaf0
005bccdd  MOV dword ptr [EBP + 0xffffff2c],EAX
005bcce3  JMP 0x005bccef
005bcce5  MOV dword ptr [EBP + 0xffffff2c],0x0
005bccef  MOV EDX,dword ptr [EBP + 0xffffff2c]
005bccf5  MOV dword ptr [EBP + -0x44],EDX
005bccf8  MOV dword ptr [EBP + -0x4],0xffffffff
005bccff  MOV EAX,dword ptr [EBP + -0x44]
005bcd02  MOV dword ptr [EBP + -0x20],EAX
005bcd05  PUSH -0x1
005bcd07  PUSH 0x19
005bcd09  PUSH 0x0
005bcd0b  PUSH 0x0
005bcd0d  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcd13  MOV EDX,dword ptr [ECX + 0x50]
005bcd16  MOV EAX,dword ptr [EDX + 0x20]
005bcd19  PUSH EAX
005bcd1a  MOV ECX,dword ptr [EBP + -0x20]
005bcd1d  CALL 0x005eae80
005bcd22  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcd28  MOV EDX,dword ptr [ECX + 0x50]
005bcd2b  MOV EAX,dword ptr [EDX + 0x24]
005bcd2e  PUSH EAX
005bcd2f  MOV ECX,dword ptr [EBP + -0x20]
005bcd32  CALL 0x005eb000
005bcd37  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcd3d  MOV EDX,dword ptr [ECX + 0x50]
005bcd40  MOV EAX,dword ptr [EDX + 0x28]
005bcd43  PUSH EAX
005bcd44  MOV ECX,dword ptr [EBP + -0x20]
005bcd47  MOV EDX,dword ptr [ECX]
005bcd49  MOV ECX,dword ptr [EBP + -0x20]
005bcd4c  MOV EAX,dword ptr [EDX + 0xb0]
005bcd52  CALL EAX
005bcd54  MOV ECX,dword ptr [EBP + -0x20]
005bcd57  MOV EDX,dword ptr [ECX]
005bcd59  MOV ECX,dword ptr [EBP + -0x20]
005bcd5c  MOV EAX,dword ptr [EDX + 0x74]
005bcd5f  CALL EAX
005bcd61  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcd67  CALL 0x005c10b0
005bcd6c  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcd72  MOV EDX,dword ptr [ECX + 0x4]
005bcd75  MOV EAX,dword ptr [EDX + 0x10]
005bcd78  MOV ECX,dword ptr [EAX + 0x8]
005bcd7b  MOV dword ptr [EBP + 0xffffff44],ECX
005bcd81  PUSH 0x1a
005bcd83  MOV EDX,dword ptr [EBP + 0xffffff40]
005bcd89  MOV EAX,dword ptr [EDX + 0x50]
005bcd8c  ADD EAX,0x4c
005bcd8f  PUSH EAX
005bcd90  MOV ECX,dword ptr [EBP + 0xffffff44]
005bcd96  PUSH ECX
005bcd97  MOV EDX,dword ptr [EBP + 0xffffff40]
005bcd9d  MOV EAX,dword ptr [EDX + 0x50]
005bcda0  MOV ECX,dword ptr [EAX + 0x48]
005bcda3  PUSH ECX
005bcda4  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcdaa  CALL 0x005c0f40
005bcdaf  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcdb5  CALL 0x005c13e0
005bcdba  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcdc0  CALL 0x005c1b60
005bcdc5  PUSH 0x1
005bcdc7  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcdcd  CALL 0x005c1d60
005bcdd2  MOV ECX,dword ptr [EBP + 0xffffff40]
005bcdd8  CALL 0x005c1ed0
005bcddd  MOV ECX,dword ptr [EBP + -0xc]
005bcde0  MOV dword ptr FS:[0x0],ECX
005bcde7  POP ECX
005bcde8  MOV ESP,EBP
005bcdea  POP EBP
005bcdeb  RET 0x4
