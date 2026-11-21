; FUN_005dd910  005dd910
005dd910  PUSH EBP
005dd911  MOV EBP,ESP
005dd913  SUB ESP,0x74
005dd916  MOV dword ptr [EBP + -0x60],ECX
005dd919  PUSH 0x0
005dd91b  PUSH 0x0
005dd91d  CALL 0x0064c8a0
005dd922  ADD ESP,0x8
005dd925  MOV dword ptr [EBP + -0x1c],EAX
005dd928  MOV dword ptr [EBP + -0x18],EDX
005dd92b  MOV EAX,dword ptr [EBP + -0x1c]
005dd92e  MOV dword ptr [EBP + -0x10],EAX
005dd931  MOV ECX,dword ptr [EBP + -0x18]
005dd934  MOV dword ptr [EBP + -0xc],ECX
005dd937  MOV dword ptr [EBP + -0x4],0x0
005dd93e  CMP dword ptr [0x0162ee80],0x0
005dd945  JZ 0x005dd999
005dd947  MOV EDX,dword ptr [0x0162ee80]
005dd94d  MOV EAX,dword ptr [EDX]
005dd94f  MOV ECX,dword ptr [0x0162ee80]
005dd955  MOV EDX,dword ptr [EAX + 0x80]
005dd95b  CALL EDX
005dd95d  MOVZX EAX,AL
005dd960  TEST EAX,EAX
005dd962  JZ 0x005dd999
005dd964  PUSH -0x1
005dd966  MOV ECX,dword ptr [EBP + -0x60]
005dd969  MOV EDX,dword ptr [ECX]
005dd96b  MOV ECX,dword ptr [EBP + -0x60]
005dd96e  MOV EAX,dword ptr [EDX + 0x33c]
005dd974  CALL EAX
005dd976  MOVZX ECX,AL
005dd979  TEST ECX,ECX
005dd97b  JZ 0x005dd999
005dd97d  MOV EDX,dword ptr [EBP + -0x60]
005dd980  MOV byte ptr [EDX + 0x4f05],0x1
005dd987  MOV ECX,dword ptr [EBP + -0x60]
005dd98a  CALL 0x005de170
005dd98f  MOV EAX,dword ptr [EBP + -0x60]
005dd992  MOV byte ptr [EAX + 0x4f05],0x0
005dd999  MOV dword ptr [EBP + -0x8],0x0
005dd9a0  JMP 0x005dd9ab
005dd9a2  MOV ECX,dword ptr [EBP + -0x8]
005dd9a5  ADD ECX,0x1
005dd9a8  MOV dword ptr [EBP + -0x8],ECX
005dd9ab  MOV EDX,dword ptr [0x0162ee84]
005dd9b1  MOV EAX,dword ptr [EDX]
005dd9b3  MOV ECX,dword ptr [0x0162ee84]
005dd9b9  MOV EDX,dword ptr [EAX + 0x10c]
005dd9bf  CALL EDX
005dd9c1  CMP dword ptr [EBP + -0x8],EAX
005dd9c4  JGE 0x005ddaa5
005dd9ca  MOV EAX,dword ptr [EBP + -0x8]
005dd9cd  PUSH EAX
005dd9ce  CALL 0x005dcb00
005dd9d3  ADD ESP,0x4
005dd9d6  MOV dword ptr [EBP + -0x38],EAX
005dd9d9  MOV ECX,dword ptr [EBP + -0x38]
005dd9dc  CALL 0x0063aac0
005dd9e1  MOV ECX,dword ptr [EAX]
005dd9e3  MOV dword ptr [EBP + -0x30],ECX
005dd9e6  CMP dword ptr [EBP + -0x30],0x2
005dd9ea  JZ 0x005dda08
005dd9ec  MOV ECX,dword ptr [EBP + -0x38]
005dd9ef  CALL 0x0063aac0
005dd9f4  MOV EDX,dword ptr [EAX]
005dd9f6  MOV dword ptr [EBP + -0x34],EDX
005dd9f9  CMP dword ptr [EBP + -0x34],0x3
005dd9fd  JZ 0x005dda08
005dd9ff  MOV dword ptr [EBP + -0x64],0x0
005dda06  JMP 0x005dda0f
005dda08  MOV dword ptr [EBP + -0x64],0x1
005dda0f  MOVZX EAX,byte ptr [EBP + -0x64]
005dda13  TEST EAX,EAX
005dda15  JZ 0x005ddaa0
005dda1b  MOV ECX,dword ptr [EBP + -0x8]
005dda1e  SUB ECX,0x1
005dda21  MOV dword ptr [EBP + -0x14],ECX
005dda24  JMP 0x005dda2f
005dda26  MOV EDX,dword ptr [EBP + -0x14]
005dda29  SUB EDX,0x1
005dda2c  MOV dword ptr [EBP + -0x14],EDX
005dda2f  CMP dword ptr [EBP + -0x14],-0x1
005dda33  JLE 0x005ddaa0
005dda35  MOV EAX,dword ptr [EBP + -0x14]
005dda38  PUSH EAX
005dda39  CALL 0x005dcb00
005dda3e  ADD ESP,0x4
005dda41  MOV dword ptr [EBP + -0x3c],EAX
005dda44  MOV ECX,dword ptr [EBP + -0x3c]
005dda47  CALL 0x0063aac0
005dda4c  ADD EAX,0x4
005dda4f  MOV dword ptr [EBP + -0x40],EAX
005dda52  MOV ECX,dword ptr [EBP + -0x8]
005dda55  PUSH ECX
005dda56  CALL 0x005dcb00
005dda5b  ADD ESP,0x4
005dda5e  MOV dword ptr [EBP + -0x44],EAX
005dda61  MOV ECX,dword ptr [EBP + -0x44]
005dda64  CALL 0x0063aac0
005dda69  ADD EAX,0x4
005dda6c  MOV dword ptr [EBP + -0x48],EAX
005dda6f  MOV EDX,dword ptr [EBP + -0x40]
005dda72  PUSH EDX
005dda73  MOV EAX,dword ptr [EBP + -0x48]
005dda76  PUSH EAX
005dda77  CALL 0x00686ec0
005dda7c  ADD ESP,0x8
005dda7f  TEST EAX,EAX
005dda81  JNZ 0x005dda9e
005dda83  PUSH 0x0
005dda85  MOV ECX,dword ptr [EBP + -0x8]
005dda88  PUSH ECX
005dda89  MOV EDX,dword ptr [EBP + -0x8]
005dda8c  PUSH EDX
005dda8d  CALL 0x005dcb00
005dda92  ADD ESP,0x4
005dda95  MOV ECX,EAX
005dda97  CALL 0x0063a3e0
005dda9c  JMP 0x005ddaa0
005dda9e  JMP 0x005dda26
005ddaa0  JMP 0x005dd9a2
005ddaa5  MOV dword ptr [EBP + -0x8],0x0
005ddaac  JMP 0x005ddab7
005ddaae  MOV EAX,dword ptr [EBP + -0x8]
005ddab1  ADD EAX,0x1
005ddab4  MOV dword ptr [EBP + -0x8],EAX
005ddab7  MOV ECX,dword ptr [0x0162ee84]
005ddabd  MOV EDX,dword ptr [ECX]
005ddabf  MOV ECX,dword ptr [0x0162ee84]
005ddac5  MOV EAX,dword ptr [EDX + 0x10c]
005ddacb  CALL EAX
005ddacd  CMP dword ptr [EBP + -0x8],EAX
005ddad0  JGE 0x005ddc4c
005ddad6  MOV ECX,dword ptr [EBP + -0x8]
005ddad9  PUSH ECX
005ddada  CALL 0x005dcb00
005ddadf  ADD ESP,0x4
005ddae2  MOV dword ptr [EBP + -0x4],EAX
005ddae5  PUSH -0x1
005ddae7  MOV EDX,dword ptr [EBP + -0x60]
005ddaea  MOV EAX,dword ptr [EDX]
005ddaec  MOV ECX,dword ptr [EBP + -0x60]
005ddaef  MOV EDX,dword ptr [EAX + 0x33c]
005ddaf5  CALL EDX
005ddaf7  MOVZX EAX,AL
005ddafa  TEST EAX,EAX
005ddafc  JZ 0x005ddc47
005ddb02  MOV ECX,dword ptr [EBP + -0x8]
005ddb05  PUSH ECX
005ddb06  CALL 0x005dcb00
005ddb0b  ADD ESP,0x4
005ddb0e  MOV dword ptr [EBP + -0x54],EAX
005ddb11  MOV ECX,dword ptr [EBP + -0x54]
005ddb14  CALL 0x0063aac0
005ddb19  MOV EDX,dword ptr [EAX]
005ddb1b  MOV dword ptr [EBP + -0x4c],EDX
005ddb1e  CMP dword ptr [EBP + -0x4c],0x2
005ddb22  JZ 0x005ddb40
005ddb24  MOV ECX,dword ptr [EBP + -0x54]
005ddb27  CALL 0x0063aac0
005ddb2c  MOV EAX,dword ptr [EAX]
005ddb2e  MOV dword ptr [EBP + -0x50],EAX
005ddb31  CMP dword ptr [EBP + -0x50],0x3
005ddb35  JZ 0x005ddb40
005ddb37  MOV dword ptr [EBP + -0x68],0x0
005ddb3e  JMP 0x005ddb47
005ddb40  MOV dword ptr [EBP + -0x68],0x1
005ddb47  MOVZX ECX,byte ptr [EBP + -0x68]
005ddb4b  TEST ECX,ECX
005ddb4d  JZ 0x005ddc47
005ddb53  MOV EDX,dword ptr [0x0162ee80]
005ddb59  MOV EAX,dword ptr [EDX]
005ddb5b  MOV ECX,dword ptr [0x0162ee80]
005ddb61  MOV EDX,dword ptr [EAX + 0x80]
005ddb67  CALL EDX
005ddb69  MOVZX EAX,AL
005ddb6c  TEST EAX,EAX
005ddb6e  JNZ 0x005ddbff
005ddb74  MOV ECX,dword ptr [EBP + -0x8]
005ddb77  PUSH ECX
005ddb78  CALL 0x005dcb00
005ddb7d  ADD ESP,0x4
005ddb80  MOV dword ptr [EBP + -0x58],EAX
005ddb83  MOV EDX,dword ptr [EBP + -0x58]
005ddb86  MOV AL,byte ptr [EDX + 0x4a2]
005ddb8c  MOV byte ptr [EBP + -0x59],AL
005ddb8f  MOVZX ECX,byte ptr [EBP + -0x59]
005ddb93  TEST ECX,ECX
005ddb95  JNZ 0x005ddbff
005ddb97  PUSH 0x0
005ddb99  PUSH 0x0
005ddb9b  CALL 0x0064c8a0
005ddba0  ADD ESP,0x8
005ddba3  MOV dword ptr [EBP + -0x24],EAX
005ddba6  MOV dword ptr [EBP + -0x20],EDX
005ddba9  MOV EDX,dword ptr [EBP + -0x24]
005ddbac  MOV dword ptr [EBP + -0x10],EDX
005ddbaf  MOV EAX,dword ptr [EBP + -0x20]
005ddbb2  MOV dword ptr [EBP + -0xc],EAX
005ddbb5  LEA ECX,[EBP + -0x10]
005ddbb8  PUSH ECX
005ddbb9  MOV EDX,dword ptr [EBP + -0x8]
005ddbbc  PUSH EDX
005ddbbd  MOV EAX,[0x007947e4]
005ddbc2  MOV EDX,dword ptr [EAX]
005ddbc4  MOV ECX,dword ptr [0x007947e4]
005ddbca  MOV EAX,dword ptr [EDX + 0x27c]
005ddbd0  CALL EAX
005ddbd2  MOV ECX,dword ptr [EBP + -0x10]
005ddbd5  IMUL ECX,ECX,-0x1
005ddbd8  MOV dword ptr [EBP + -0x10],ECX
005ddbdb  MOV EDX,dword ptr [EBP + -0xc]
005ddbde  IMUL EDX,EDX,-0x1
005ddbe1  MOV dword ptr [EBP + -0xc],EDX
005ddbe4  MOV EAX,dword ptr [EBP + -0xc]
005ddbe7  PUSH EAX
005ddbe8  MOV ECX,dword ptr [EBP + -0x10]
005ddbeb  PUSH ECX
005ddbec  MOV EDX,dword ptr [EBP + -0x8]
005ddbef  PUSH EDX
005ddbf0  CALL 0x005dcb00
005ddbf5  ADD ESP,0x4
005ddbf8  MOV ECX,EAX
005ddbfa  CALL 0x005d5fb0
005ddbff  MOV ECX,dword ptr [0x007947e4]
005ddc05  CALL 0x005da7b0
005ddc0a  MOVZX EAX,AL
005ddc0d  TEST EAX,EAX
005ddc0f  JZ 0x005ddc2d
005ddc11  MOV ECX,dword ptr [EBP + -0x8]
005ddc14  PUSH ECX
005ddc15  MOV EDX,dword ptr [0x007947e4]
005ddc1b  MOV EAX,dword ptr [EDX]
005ddc1d  MOV ECX,dword ptr [0x007947e4]
005ddc23  MOV EDX,dword ptr [EAX + 0x298]
005ddc29  CALL EDX
005ddc2b  JMP 0x005ddc47
005ddc2d  MOV EAX,dword ptr [EBP + -0x8]
005ddc30  PUSH EAX
005ddc31  MOV ECX,dword ptr [0x007947e4]
005ddc37  MOV EDX,dword ptr [ECX]
005ddc39  MOV ECX,dword ptr [0x007947e4]
005ddc3f  MOV EAX,dword ptr [EDX + 0x29c]
005ddc45  CALL EAX
005ddc47  JMP 0x005ddaae
005ddc4c  MOV ECX,dword ptr [EBP + -0x60]
005ddc4f  CALL 0x00636250
005ddc54  MOV dword ptr [EBP + -0x8],0x0
005ddc5b  JMP 0x005ddc66
005ddc5d  MOV ECX,dword ptr [EBP + -0x8]
005ddc60  ADD ECX,0x1
005ddc63  MOV dword ptr [EBP + -0x8],ECX
005ddc66  MOV EDX,dword ptr [0x0162ee84]
005ddc6c  MOV EAX,dword ptr [EDX]
005ddc6e  MOV ECX,dword ptr [0x0162ee84]
005ddc74  MOV EDX,dword ptr [EAX + 0x10c]
005ddc7a  CALL EDX
005ddc7c  CMP dword ptr [EBP + -0x8],EAX
005ddc7f  JGE 0x005ddd13
005ddc85  MOV EAX,dword ptr [EBP + -0x8]
005ddc88  PUSH EAX
005ddc89  CALL 0x005dcb00
005ddc8e  ADD ESP,0x4
005ddc91  MOV ECX,dword ptr [EAX + 0x49c]
005ddc97  MOV dword ptr [EBP + -0x2c],ECX
005ddc9a  MOV EDX,dword ptr [EBP + -0x2c]
005ddc9d  MOV dword ptr [EBP + -0x28],EDX
005ddca0  CMP dword ptr [EBP + -0x28],0x0
005ddca4  JZ 0x005ddcb9
005ddca6  PUSH 0x1
005ddca8  MOV EAX,dword ptr [EBP + -0x28]
005ddcab  MOV EDX,dword ptr [EAX]
005ddcad  MOV ECX,dword ptr [EBP + -0x28]
005ddcb0  MOV EAX,dword ptr [EDX]
005ddcb2  CALL EAX
005ddcb4  MOV dword ptr [EBP + -0x6c],EAX
005ddcb7  JMP 0x005ddcc0
005ddcb9  MOV dword ptr [EBP + -0x6c],0x0
005ddcc0  MOV ECX,dword ptr [EBP + -0x8]
005ddcc3  PUSH ECX
005ddcc4  CALL 0x005dcb00
005ddcc9  ADD ESP,0x4
005ddccc  MOV dword ptr [EAX + 0x49c],0x0
005ddcd6  MOV EDX,dword ptr [EBP + -0x8]
005ddcd9  PUSH EDX
005ddcda  CALL 0x005dcb00
005ddcdf  ADD ESP,0x4
005ddce2  MOV dword ptr [EBP + -0x70],EAX
005ddce5  MOV EAX,dword ptr [EBP + -0x70]
005ddce8  MOV EDX,dword ptr [EAX]
005ddcea  MOV ECX,dword ptr [EBP + -0x70]
005ddced  MOV EAX,dword ptr [EDX + 0x10]
005ddcf0  CALL EAX
005ddcf2  MOV ECX,dword ptr [EBP + -0x8]
005ddcf5  PUSH ECX
005ddcf6  CALL 0x005dcb00
005ddcfb  ADD ESP,0x4
005ddcfe  MOV dword ptr [EBP + -0x74],EAX
005ddd01  MOV EDX,dword ptr [EBP + -0x74]
005ddd04  MOV EAX,dword ptr [EDX]
005ddd06  MOV ECX,dword ptr [EBP + -0x74]
005ddd09  MOV EDX,dword ptr [EAX + 0x14]
005ddd0c  CALL EDX
005ddd0e  JMP 0x005ddc5d
005ddd13  MOV ESP,EBP
005ddd15  POP EBP
005ddd16  RET
