; FUN_0057cb70  0057cb70
0057cb70  PUSH EBP
0057cb71  MOV EBP,ESP
0057cb73  SUB ESP,0x11c
0057cb79  MOV EAX,[0x00781870]
0057cb7e  XOR EAX,EBP
0057cb80  MOV dword ptr [EBP + -0x14],EAX
0057cb83  PUSH ESI
0057cb84  MOV dword ptr [EBP + 0xfffffee4],ECX
0057cb8a  CMP dword ptr [EBP + 0x8],-0x1
0057cb8e  JNZ 0x0057cbbe
0057cb90  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cb96  CALL 0x005f88f0
0057cb9b  MOVZX EAX,AL
0057cb9e  TEST EAX,EAX
0057cba0  JZ 0x0057cbb9
0057cba2  CALL 0x005ea2e0
0057cba7  MOVZX ECX,AL
0057cbaa  TEST ECX,ECX
0057cbac  JZ 0x0057cbb9
0057cbae  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cbb4  CALL 0x005f85d0
0057cbb9  JMP 0x0057d38d
0057cbbe  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cbc4  CALL 0x005f88f0
0057cbc9  MOVZX EDX,AL
0057cbcc  TEST EDX,EDX
0057cbce  JZ 0x0057cbe7
0057cbd0  CALL 0x005ea2e0
0057cbd5  MOVZX EAX,AL
0057cbd8  TEST EAX,EAX
0057cbda  JZ 0x0057cbe7
0057cbdc  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cbe2  CALL 0x005f85d0
0057cbe7  MOV dword ptr [EBP + -0x8],0x0
0057cbee  JMP 0x0057cbf9
0057cbf0  MOV ECX,dword ptr [EBP + -0x8]
0057cbf3  ADD ECX,0x1
0057cbf6  MOV dword ptr [EBP + -0x8],ECX
0057cbf9  MOV EDX,dword ptr [0x00793578]
0057cbff  MOV EAX,dword ptr [EBP + -0x8]
0057cc02  CMP EAX,dword ptr [EDX + 0x19d4]
0057cc08  JGE 0x0057cc2c
0057cc0a  MOV ECX,dword ptr [EBP + -0x8]
0057cc0d  CMP ECX,dword ptr [EBP + 0x8]
0057cc10  SETZ DL
0057cc13  PUSH EDX
0057cc14  MOV EAX,[0x00793578]
0057cc19  MOV ECX,dword ptr [EAX + 0x19d8]
0057cc1f  MOV EDX,dword ptr [EBP + -0x8]
0057cc22  MOV ECX,dword ptr [ECX + EDX*0x4]
0057cc25  CALL 0x0057c410
0057cc2a  JMP 0x0057cbf0
0057cc2c  MOV EAX,dword ptr [EBP + 0xfffffee4]
0057cc32  MOV ECX,dword ptr [EBP + 0x8]
0057cc35  MOV dword ptr [EAX + 0x1b4],ECX
0057cc3b  MOV EDX,dword ptr [EBP + 0x8]
0057cc3e  IMUL EDX,EDX,0x224
0057cc44  MOV EAX,[0x00793578]
0057cc49  MOV ECX,dword ptr [EAX + 0x19d0]
0057cc4f  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x200]
0057cc56  MOV dword ptr [EBP + -0x4],EDX
0057cc59  MOV EAX,dword ptr [EBP + 0x8]
0057cc5c  IMUL EAX,EAX,0x224
0057cc62  MOV ECX,dword ptr [0x00793578]
0057cc68  MOV EDX,dword ptr [ECX + 0x19d0]
0057cc6e  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x204]
0057cc75  MOV dword ptr [EBP + -0xc],EAX
0057cc78  CMP dword ptr [EBP + -0xc],-0x1
0057cc7c  JNZ 0x0057cc94
0057cc7e  PUSH 0x280
0057cc83  MOV ECX,dword ptr [EBP + -0x4]
0057cc86  PUSH ECX
0057cc87  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cc8d  CALL 0x005f8510
0057cc92  JMP 0x0057cca7
0057cc94  MOV EDX,dword ptr [EBP + -0xc]
0057cc97  PUSH EDX
0057cc98  MOV EAX,dword ptr [EBP + -0x4]
0057cc9b  PUSH EAX
0057cc9c  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cca2  CALL 0x005f8510
0057cca7  MOV ECX,dword ptr [EBP + -0x4]
0057ccaa  SUB ECX,0x14
0057ccad  PUSH ECX
0057ccae  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057ccb4  MOV ECX,dword ptr [EDX + 0x1d0]
0057ccba  CALL 0x005ecc60
0057ccbf  CMP dword ptr [EBP + -0xc],-0x1
0057ccc3  JNZ 0x0057ccdd
0057ccc5  PUSH 0x280
0057ccca  MOV EAX,dword ptr [EBP + 0xfffffee4]
0057ccd0  MOV ECX,dword ptr [EAX + 0x1d0]
0057ccd6  CALL 0x005eccb0
0057ccdb  JMP 0x0057ccf5
0057ccdd  MOV ECX,dword ptr [EBP + -0xc]
0057cce0  SUB ECX,0x14
0057cce3  PUSH ECX
0057cce4  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057ccea  MOV ECX,dword ptr [EDX + 0x1d0]
0057ccf0  CALL 0x005eccb0
0057ccf5  PUSH 0x1fe
0057ccfa  MOV EAX,dword ptr [EBP + 0xfffffee4]
0057cd00  MOV ECX,dword ptr [EAX + 0x1d0]
0057cd06  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057cd0c  MOV EAX,dword ptr [EDX + 0x1d0]
0057cd12  MOV EDX,dword ptr [ECX]
0057cd14  MOV ECX,EAX
0057cd16  MOV EAX,dword ptr [EDX + 0x6c]
0057cd19  CALL EAX
0057cd1b  PUSH 0x6
0057cd1d  PUSH 0xa
0057cd1f  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cd25  MOV EDX,dword ptr [ECX + 0x1d0]
0057cd2b  MOV EAX,dword ptr [EBP + 0xfffffee4]
0057cd31  MOV ECX,dword ptr [EAX + 0x1d0]
0057cd37  MOV EDX,dword ptr [EDX]
0057cd39  MOV EAX,dword ptr [EDX + 0x44]
0057cd3c  CALL EAX
0057cd3e  MOV ECX,dword ptr [EBP + 0x8]
0057cd41  IMUL ECX,ECX,0x224
0057cd47  MOV EDX,dword ptr [0x00793578]
0057cd4d  MOV EAX,dword ptr [EDX + 0x19d0]
0057cd53  MOVZX ECX,byte ptr [EAX + ECX*0x1 + 0x219]
0057cd5b  TEST ECX,ECX
0057cd5d  JZ 0x0057cda4
0057cd5f  MOV EDX,dword ptr [EBP + 0x8]
0057cd62  IMUL EDX,EDX,0x224
0057cd68  MOV EAX,[0x00793578]
0057cd6d  MOV ECX,dword ptr [EAX + 0x19d0]
0057cd73  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x220]
0057cd7a  PUSH EDX
0057cd7b  MOV EAX,dword ptr [EBP + 0xfffffee4]
0057cd81  MOV ECX,dword ptr [EAX + 0x1d0]
0057cd87  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057cd8d  MOV EAX,dword ptr [EDX + 0x1d0]
0057cd93  MOV EDX,dword ptr [ECX]
0057cd95  MOV ECX,EAX
0057cd97  MOV EAX,dword ptr [EDX + 0xb4]
0057cd9d  CALL EAX
0057cd9f  JMP 0x0057cf75
0057cda4  MOV ECX,dword ptr [EBP + 0x8]
0057cda7  IMUL ECX,ECX,0x224
0057cdad  MOV EDX,dword ptr [0x00793578]
0057cdb3  MOV EAX,dword ptr [EDX + 0x19d0]
0057cdb9  LEA ECX,[EAX + ECX*0x1 + 0x100]
0057cdc0  PUSH ECX
0057cdc1  PUSH 0x6cbf00
0057cdc6  CALL 0x00686ec0
0057cdcb  ADD ESP,0x8
0057cdce  TEST EAX,EAX
0057cdd0  JNZ 0x0057ce07
0057cdd2  PUSH 0x6cbed8
0057cdd7  CALL 0x00630f40
0057cddc  ADD ESP,0x4
0057cddf  PUSH EAX
0057cde0  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057cde6  MOV EAX,dword ptr [EDX + 0x1d0]
0057cdec  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cdf2  MOV ECX,dword ptr [ECX + 0x1d0]
0057cdf8  MOV EDX,dword ptr [EAX]
0057cdfa  MOV EAX,dword ptr [EDX + 0xb4]
0057ce00  CALL EAX
0057ce02  JMP 0x0057cf75
0057ce07  MOV ECX,dword ptr [EBP + 0x8]
0057ce0a  IMUL ECX,ECX,0x224
0057ce10  MOV EDX,dword ptr [0x00793578]
0057ce16  MOV EAX,dword ptr [EDX + 0x19d0]
0057ce1c  LEA ECX,[EAX + ECX*0x1 + 0x100]
0057ce23  PUSH ECX
0057ce24  PUSH 0x6cbebc
0057ce29  CALL 0x00686ec0
0057ce2e  ADD ESP,0x8
0057ce31  TEST EAX,EAX
0057ce33  JNZ 0x0057ce6a
0057ce35  PUSH 0x6cbe9c
0057ce3a  CALL 0x00630f40
0057ce3f  ADD ESP,0x4
0057ce42  PUSH EAX
0057ce43  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057ce49  MOV EAX,dword ptr [EDX + 0x1d0]
0057ce4f  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057ce55  MOV ECX,dword ptr [ECX + 0x1d0]
0057ce5b  MOV EDX,dword ptr [EAX]
0057ce5d  MOV EAX,dword ptr [EDX + 0xb4]
0057ce63  CALL EAX
0057ce65  JMP 0x0057cf75
0057ce6a  MOV ECX,dword ptr [EBP + 0x8]
0057ce6d  IMUL ECX,ECX,0x224
0057ce73  MOV EDX,dword ptr [0x00793578]
0057ce79  MOV EAX,dword ptr [EDX + 0x19d0]
0057ce7f  LEA ECX,[EAX + ECX*0x1 + 0x100]
0057ce86  PUSH ECX
0057ce87  PUSH 0x6cbe74
0057ce8c  CALL 0x00686ec0
0057ce91  ADD ESP,0x8
0057ce94  TEST EAX,EAX
0057ce96  JNZ 0x0057cecd
0057ce98  PUSH 0x6cbe48
0057ce9d  CALL 0x00630f40
0057cea2  ADD ESP,0x4
0057cea5  PUSH EAX
0057cea6  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057ceac  MOV EAX,dword ptr [EDX + 0x1d0]
0057ceb2  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057ceb8  MOV ECX,dword ptr [ECX + 0x1d0]
0057cebe  MOV EDX,dword ptr [EAX]
0057cec0  MOV EAX,dword ptr [EDX + 0xb4]
0057cec6  CALL EAX
0057cec8  JMP 0x0057cf75
0057cecd  MOV ECX,dword ptr [EBP + 0x8]
0057ced0  IMUL ECX,ECX,0x224
0057ced6  MOV EDX,dword ptr [0x00793578]
0057cedc  MOV EAX,dword ptr [EDX + 0x19d0]
0057cee2  LEA ECX,[EAX + ECX*0x1 + 0x100]
0057cee9  PUSH ECX
0057ceea  PUSH 0x6cbe24
0057ceef  CALL 0x00686ec0
0057cef4  ADD ESP,0x8
0057cef7  TEST EAX,EAX
0057cef9  JNZ 0x0057cf2d
0057cefb  PUSH 0x6cbdfc
0057cf00  CALL 0x00630f40
0057cf05  ADD ESP,0x4
0057cf08  PUSH EAX
0057cf09  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057cf0f  MOV EAX,dword ptr [EDX + 0x1d0]
0057cf15  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cf1b  MOV ECX,dword ptr [ECX + 0x1d0]
0057cf21  MOV EDX,dword ptr [EAX]
0057cf23  MOV EAX,dword ptr [EDX + 0xb4]
0057cf29  CALL EAX
0057cf2b  JMP 0x0057cf75
0057cf2d  MOV ECX,dword ptr [EBP + 0x8]
0057cf30  IMUL ECX,ECX,0x224
0057cf36  MOV EDX,dword ptr [0x00793578]
0057cf3c  MOV EAX,dword ptr [EDX + 0x19d0]
0057cf42  LEA ECX,[EAX + ECX*0x1 + 0x100]
0057cf49  PUSH ECX
0057cf4a  CALL 0x00630f40
0057cf4f  ADD ESP,0x4
0057cf52  PUSH EAX
0057cf53  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057cf59  MOV EAX,dword ptr [EDX + 0x1d0]
0057cf5f  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cf65  MOV ECX,dword ptr [ECX + 0x1d0]
0057cf6b  MOV EDX,dword ptr [EAX]
0057cf6d  MOV EAX,dword ptr [EDX + 0xb4]
0057cf73  CALL EAX
0057cf75  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cf7b  MOV EDX,dword ptr [ECX + 0x1d0]
0057cf81  MOV EAX,dword ptr [EBP + 0xfffffee4]
0057cf87  MOV ECX,dword ptr [EAX + 0x1d0]
0057cf8d  MOV EDX,dword ptr [EDX]
0057cf8f  MOV EAX,dword ptr [EDX + 0x74]
0057cf92  CALL EAX
0057cf94  CMP dword ptr [EBP + -0xc],-0x1
0057cf98  JNZ 0x0057cfbe
0057cf9a  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cfa0  MOV ECX,dword ptr [ECX + 0x1d0]
0057cfa6  CALL 0x005ef440
0057cfab  ADD EAX,0x14
0057cfae  PUSH EAX
0057cfaf  MOV EDX,dword ptr [EBP + -0x4]
0057cfb2  PUSH EDX
0057cfb3  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057cfb9  CALL 0x005f8510
0057cfbe  MOV EAX,dword ptr [EBP + 0x8]
0057cfc1  IMUL EAX,EAX,0x224
0057cfc7  MOV ECX,dword ptr [0x00793578]
0057cfcd  MOV EDX,dword ptr [ECX + 0x19d0]
0057cfd3  CMP dword ptr [EDX + EAX*0x1 + 0x208],0x0
0057cfdb  JZ 0x0057d1cf
0057cfe1  MOV EAX,dword ptr [EBP + 0x8]
0057cfe4  IMUL EAX,EAX,0x224
0057cfea  MOV ECX,dword ptr [0x00793578]
0057cff0  MOV EDX,dword ptr [ECX + 0x19d0]
0057cff6  MOV EAX,dword ptr [EDX + EAX*0x1 + 0x208]
0057cffd  PUSH EAX
0057cffe  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d004  MOV ECX,dword ptr [ECX + 0x1d4]
0057d00a  CALL 0x005eaf00
0057d00f  PUSH 0x1ff
0057d014  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057d01a  MOV EAX,dword ptr [EDX + 0x1d4]
0057d020  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d026  MOV ECX,dword ptr [ECX + 0x1d4]
0057d02c  MOV EDX,dword ptr [EAX]
0057d02e  MOV EAX,dword ptr [EDX + 0x6c]
0057d031  CALL EAX
0057d033  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d039  MOV ECX,dword ptr [ECX + 0x1d0]
0057d03f  CALL 0x005ef440
0057d044  ADD EAX,0x14
0057d047  PUSH EAX
0057d048  PUSH 0xa
0057d04a  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057d050  MOV EAX,dword ptr [EDX + 0x1d4]
0057d056  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d05c  MOV ECX,dword ptr [ECX + 0x1d4]
0057d062  MOV EDX,dword ptr [EAX]
0057d064  MOV EAX,dword ptr [EDX + 0x44]
0057d067  CALL EAX
0057d069  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d06f  MOV EDX,dword ptr [ECX + 0x1d4]
0057d075  MOV EAX,dword ptr [EBP + 0xfffffee4]
0057d07b  MOV ECX,dword ptr [EAX + 0x1d4]
0057d081  MOV EDX,dword ptr [EDX]
0057d083  MOV EAX,dword ptr [EDX + 0x74]
0057d086  CALL EAX
0057d088  MOV ECX,dword ptr [EBP + 0x8]
0057d08b  IMUL ECX,ECX,0x224
0057d091  MOV EDX,dword ptr [0x00793578]
0057d097  MOV EAX,dword ptr [EDX + 0x19d0]
0057d09d  CMP dword ptr [EAX + ECX*0x1 + 0x20c],0x0
0057d0a5  JZ 0x0057d18f
0057d0ab  MOV ECX,dword ptr [EBP + 0x8]
0057d0ae  IMUL ECX,ECX,0x224
0057d0b4  MOV EDX,dword ptr [0x00793578]
0057d0ba  MOV EAX,dword ptr [EDX + 0x19d0]
0057d0c0  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x20c]
0057d0c7  PUSH ECX
0057d0c8  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057d0ce  MOV ECX,dword ptr [EDX + 0x1d8]
0057d0d4  CALL 0x005eaf00
0057d0d9  PUSH 0x200
0057d0de  MOV EAX,dword ptr [EBP + 0xfffffee4]
0057d0e4  MOV ECX,dword ptr [EAX + 0x1d8]
0057d0ea  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057d0f0  MOV EAX,dword ptr [EDX + 0x1d8]
0057d0f6  MOV EDX,dword ptr [ECX]
0057d0f8  MOV ECX,EAX
0057d0fa  MOV EAX,dword ptr [EDX + 0x6c]
0057d0fd  CALL EAX
0057d0ff  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d105  MOV ECX,dword ptr [ECX + 0x1d0]
0057d10b  CALL 0x005ef440
0057d110  MOV EDX,dword ptr [EBP + 0x8]
0057d113  IMUL EDX,EDX,0x224
0057d119  MOV ECX,dword ptr [0x00793578]
0057d11f  MOV ECX,dword ptr [ECX + 0x19d0]
0057d125  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x214]
0057d12c  LEA EAX,[EAX + EDX*0x1 + 0x14]
0057d130  PUSH EAX
0057d131  MOV ECX,dword ptr [EBP + 0x8]
0057d134  IMUL ECX,ECX,0x224
0057d13a  MOV EDX,dword ptr [0x00793578]
0057d140  MOV EAX,dword ptr [EDX + 0x19d0]
0057d146  MOV ECX,dword ptr [EAX + ECX*0x1 + 0x210]
0057d14d  ADD ECX,0xa
0057d150  PUSH ECX
0057d151  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057d157  MOV EAX,dword ptr [EDX + 0x1d8]
0057d15d  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d163  MOV ECX,dword ptr [ECX + 0x1d8]
0057d169  MOV EDX,dword ptr [EAX]
0057d16b  MOV EAX,dword ptr [EDX + 0x44]
0057d16e  CALL EAX
0057d170  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d176  MOV EDX,dword ptr [ECX + 0x1d8]
0057d17c  MOV EAX,dword ptr [EBP + 0xfffffee4]
0057d182  MOV ECX,dword ptr [EAX + 0x1d8]
0057d188  MOV EDX,dword ptr [EDX]
0057d18a  MOV EAX,dword ptr [EDX + 0x74]
0057d18d  CALL EAX
0057d18f  CMP dword ptr [EBP + -0xc],-0x1
0057d193  JNZ 0x0057d1cd
0057d195  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d19b  MOV ECX,dword ptr [ECX + 0x1d0]
0057d1a1  CALL 0x005ef440
0057d1a6  MOV ESI,EAX
0057d1a8  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057d1ae  MOV ECX,dword ptr [EDX + 0x1d4]
0057d1b4  CALL 0x005f5590
0057d1b9  LEA EAX,[ESI + EAX*0x1 + 0x1e]
0057d1bd  PUSH EAX
0057d1be  MOV ECX,dword ptr [EBP + -0x4]
0057d1c1  PUSH ECX
0057d1c2  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d1c8  CALL 0x005f8510
0057d1cd  JMP 0x0057d20d
0057d1cf  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057d1d5  MOV EAX,dword ptr [EDX + 0x1d4]
0057d1db  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d1e1  MOV ECX,dword ptr [ECX + 0x1d4]
0057d1e7  MOV EDX,dword ptr [EAX]
0057d1e9  MOV EAX,dword ptr [EDX + 0x70]
0057d1ec  CALL EAX
0057d1ee  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d1f4  MOV EDX,dword ptr [ECX + 0x1d8]
0057d1fa  MOV EAX,dword ptr [EBP + 0xfffffee4]
0057d200  MOV ECX,dword ptr [EAX + 0x1d8]
0057d206  MOV EDX,dword ptr [EDX]
0057d208  MOV EAX,dword ptr [EDX + 0x70]
0057d20b  CALL EAX
0057d20d  MOV dword ptr [EBP + -0x8],0x0
0057d214  JMP 0x0057d21f
0057d216  MOV ECX,dword ptr [EBP + -0x8]
0057d219  ADD ECX,0x1
0057d21c  MOV dword ptr [EBP + -0x8],ECX
0057d21f  CMP dword ptr [EBP + -0x8],0x6
0057d223  JGE 0x0057d312
0057d229  MOV EDX,dword ptr [EBP + -0x8]
0057d22c  ADD EDX,0x1f5
0057d232  PUSH EDX
0057d233  MOV EAX,dword ptr [EBP + -0x8]
0057d236  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d23c  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1b8]
0057d243  MOV EAX,dword ptr [EBP + -0x8]
0057d246  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d24c  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1b8]
0057d253  MOV EDX,dword ptr [EDX]
0057d255  MOV EAX,dword ptr [EDX + 0x6c]
0057d258  CALL EAX
0057d25a  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d260  CALL 0x005f8570
0057d265  MOV ECX,dword ptr [EBP + -0x8]
0057d268  ADD ECX,0x1
0057d26b  SUB EAX,ECX
0057d26d  PUSH EAX
0057d26e  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d274  CALL 0x005f8550
0057d279  MOV EDX,dword ptr [EBP + -0x8]
0057d27c  ADD EDX,0x1
0057d27f  SUB EAX,EDX
0057d281  PUSH EAX
0057d282  MOV EAX,dword ptr [EBP + -0x8]
0057d285  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d28b  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1b8]
0057d292  MOV EAX,dword ptr [EBP + -0x8]
0057d295  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d29b  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1b8]
0057d2a2  MOV EDX,dword ptr [EDX]
0057d2a4  MOV EAX,dword ptr [EDX + 0x78]
0057d2a7  CALL EAX
0057d2a9  MOV EAX,dword ptr [EBP + -0x8]
0057d2ac  ADD EAX,0x2
0057d2af  CDQ
0057d2b0  SUB EAX,EDX
0057d2b2  SAR EAX,0x1
0057d2b4  MOV dword ptr [EBP + -0x10],EAX
0057d2b7  MOV ECX,dword ptr [EBP + -0x10]
0057d2ba  PUSH ECX
0057d2bb  MOV EDX,dword ptr [EBP + -0x10]
0057d2be  PUSH EDX
0057d2bf  MOV EAX,dword ptr [EBP + -0x8]
0057d2c2  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d2c8  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x1b8]
0057d2cf  MOV EAX,dword ptr [EBP + -0x8]
0057d2d2  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d2d8  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x1b8]
0057d2df  MOV EDX,dword ptr [EDX]
0057d2e1  MOV EAX,dword ptr [EDX + 0x44]
0057d2e4  CALL EAX
0057d2e6  MOV ECX,dword ptr [EBP + -0x8]
0057d2e9  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057d2ef  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x1b8]
0057d2f6  MOV ECX,dword ptr [EBP + -0x8]
0057d2f9  MOV EDX,dword ptr [EBP + 0xfffffee4]
0057d2ff  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x1b8]
0057d306  MOV EAX,dword ptr [EAX]
0057d308  MOV EDX,dword ptr [EAX + 0x74]
0057d30b  CALL EDX
0057d30d  JMP 0x0057d216
0057d312  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d318  CALL 0x005f8550
0057d31d  CMP EAX,0x280
0057d322  JG 0x0057d336
0057d324  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d32a  CALL 0x005f8570
0057d32f  CMP EAX,0x1e0
0057d334  JLE 0x0057d351
0057d336  XOR EAX,EAX
0057d338  JNZ 0x0057d351
0057d33a  PUSH 0x2d6
0057d33f  PUSH 0x6cbddc
0057d344  PUSH 0x6b2f58
0057d349  CALL 0x005e9f20
0057d34e  ADD ESP,0xc
0057d351  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d357  CALL 0x005f8570
0057d35c  PUSH EAX
0057d35d  MOV ECX,dword ptr [EBP + 0xfffffee4]
0057d363  CALL 0x005f8550
0057d368  PUSH EAX
0057d369  PUSH 0x6cbdc0
0057d36e  LEA EDX,[EBP + 0xfffffee8]
0057d374  PUSH EDX
0057d375  CALL dword ptr [0x006b2220]
0057d37b  ADD ESP,0x10
0057d37e  LEA EAX,[EBP + 0xfffffee8]
0057d384  PUSH EAX
0057d385  CALL 0x0062fde0
0057d38a  ADD ESP,0x4
0057d38d  POP ESI
0057d38e  MOV ECX,dword ptr [EBP + -0x14]
0057d391  XOR ECX,EBP
0057d393  CALL 0x00686d72
0057d398  MOV ESP,EBP
0057d39a  POP EBP
0057d39b  RET 0x4
