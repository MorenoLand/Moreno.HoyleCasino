; FUN_005cde20  005cde20
005cde20  PUSH EBP
005cde21  MOV EBP,ESP
005cde23  SUB ESP,0xec
005cde29  MOV EAX,[0x00781870]
005cde2e  XOR EAX,EBP
005cde30  MOV dword ptr [EBP + -0x20],EAX
005cde33  MOV dword ptr [EBP + 0xffffff1c],ECX
005cde39  MOV dword ptr [EBP + -0x14],0x6d2c88
005cde40  MOV dword ptr [EBP + -0x10],0x6d2c6c
005cde47  MOV dword ptr [EBP + -0xc],0x6b3148
005cde4e  MOV dword ptr [EBP + -0x8],0x6d2c50
005cde55  MOV dword ptr [EBP + 0xffffff40],0x0
005cde5f  MOV dword ptr [EBP + 0xffffff44],0x0
005cde69  MOV EAX,dword ptr [EBP + 0x8]
005cde6c  MOV ECX,dword ptr [EAX + 0x4cc]
005cde72  MOV EDX,dword ptr [EAX + 0x4d0]
005cde78  MOV dword ptr [EBP + 0xffffff38],ECX
005cde7e  MOV dword ptr [EBP + 0xffffff3c],EDX
005cde84  MOV EAX,dword ptr [EBP + 0x8]
005cde87  MOV ECX,dword ptr [EAX + 0x4c4]
005cde8d  MOV EDX,dword ptr [EAX + 0x4c8]
005cde93  MOV dword ptr [EBP + -0x1c],ECX
005cde96  MOV dword ptr [EBP + -0x18],EDX
005cde99  PUSH 0x0
005cde9b  MOV ECX,dword ptr [EBP + 0xffffff1c]
005cdea1  CALL 0x005f89d0
005cdea6  CMP dword ptr [EBP + 0xffffff38],0x0
005cdead  JGE 0x005cdebe
005cdeaf  MOV EAX,dword ptr [EBP + 0xffffff38]
005cdeb5  IMUL EAX,EAX,-0x1
005cdeb8  MOV dword ptr [EBP + 0xffffff38],EAX
005cdebe  CMP dword ptr [EBP + 0xffffff3c],0x0
005cdec5  JGE 0x005cded6
005cdec7  MOV ECX,dword ptr [EBP + 0xffffff3c]
005cdecd  IMUL ECX,ECX,-0x1
005cded0  MOV dword ptr [EBP + 0xffffff3c],ECX
005cded6  CMP dword ptr [EBP + -0x1c],0x0
005cdeda  JGE 0x005cdee5
005cdedc  MOV EDX,dword ptr [EBP + -0x1c]
005cdedf  IMUL EDX,EDX,-0x1
005cdee2  MOV dword ptr [EBP + -0x1c],EDX
005cdee5  CMP dword ptr [EBP + -0x18],0x0
005cdee9  JGE 0x005cdef4
005cdeeb  MOV EAX,dword ptr [EBP + -0x18]
005cdeee  IMUL EAX,EAX,-0x1
005cdef1  MOV dword ptr [EBP + -0x18],EAX
005cdef4  LEA ECX,[EBP + 0xffffff40]
005cdefa  PUSH ECX
005cdefb  MOV EDX,dword ptr [EBP + 0x8]
005cdefe  MOV EAX,dword ptr [EDX + 0x4]
005cdf01  PUSH EAX
005cdf02  MOV ECX,dword ptr [0x007947e4]
005cdf08  MOV EDX,dword ptr [ECX]
005cdf0a  MOV ECX,dword ptr [0x007947e4]
005cdf10  MOV EAX,dword ptr [EDX + 0x27c]
005cdf16  CALL EAX
005cdf18  MOV dword ptr [EBP + -0x4],0x0
005cdf1f  JMP 0x005cdf2a
005cdf21  MOV ECX,dword ptr [EBP + -0x4]
005cdf24  ADD ECX,0x1
005cdf27  MOV dword ptr [EBP + -0x4],ECX
005cdf2a  CMP dword ptr [EBP + -0x4],0x4
005cdf2e  JGE 0x005ce154
005cdf34  PUSH -0x1
005cdf36  PUSH 0x6
005cdf38  PUSH 0x1
005cdf3a  MOV EDX,dword ptr [EBP + -0x4]
005cdf3d  IMUL EDX,EDX,0xd
005cdf40  ADD EDX,0x1d
005cdf43  PUSH EDX
005cdf44  PUSH 0x5
005cdf46  PUSH 0xe
005cdf48  PUSH 0x3c
005cdf4a  PUSH 0x23
005cdf4c  MOV EAX,dword ptr [EBP + -0x4]
005cdf4f  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x14]
005cdf53  PUSH ECX
005cdf54  CALL 0x00630f40
005cdf59  ADD ESP,0x4
005cdf5c  PUSH EAX
005cdf5d  MOV EDX,dword ptr [EBP + -0x4]
005cdf60  PUSH EDX
005cdf61  PUSH 0x0
005cdf63  MOV ECX,dword ptr [EBP + 0xffffff1c]
005cdf69  CALL 0x005fa5b0
005cdf6e  MOV dword ptr [EBP + 0xffffff34],EAX
005cdf74  MOV EAX,dword ptr [EBP + -0x4]
005cdf77  MOV dword ptr [EBP + 0xffffff18],EAX
005cdf7d  CMP dword ptr [EBP + 0xffffff18],0x3
005cdf84  JA 0x005ce11c
005cdf8a  MOV ECX,dword ptr [EBP + 0xffffff18]
005cdf90  JMP dword ptr [ECX*0x4 + 0x5ce238]
005cdf97  PUSH 0x1
005cdf99  PUSH 0x1
005cdf9b  PUSH 0x1
005cdf9d  LEA EDX,[EBP + 0xffffff48]
005cdfa3  PUSH EDX
005cdfa4  LEA EAX,[EBP + 0xffffff2c]
005cdfaa  PUSH EAX
005cdfab  MOV ECX,dword ptr [EBP + 0x8]
005cdfae  CALL 0x005d5a90
005cdfb3  MOV ECX,dword ptr [EAX + 0x4]
005cdfb6  PUSH ECX
005cdfb7  MOV EDX,dword ptr [EAX]
005cdfb9  PUSH EDX
005cdfba  CALL 0x0064c8d0
005cdfbf  ADD ESP,0x18
005cdfc2  JMP 0x005ce11c
005cdfc7  MOV ECX,dword ptr [0x007947e4]
005cdfcd  CALL 0x005da7b0
005cdfd2  MOVZX EAX,AL
005cdfd5  TEST EAX,EAX
005cdfd7  JZ 0x005ce012
005cdfd9  MOV ECX,dword ptr [EBP + 0x8]
005cdfdc  MOV EDX,dword ptr [ECX + 0x4]
005cdfdf  PUSH EDX
005cdfe0  MOV EAX,[0x007947e4]
005cdfe5  MOV EDX,dword ptr [EAX]
005cdfe7  MOV ECX,dword ptr [0x007947e4]
005cdfed  MOV EAX,dword ptr [EDX + 0x2c4]
005cdff3  CALL EAX
005cdff5  MOVZX ECX,AL
005cdff8  TEST ECX,ECX
005cdffa  JZ 0x005ce012
005cdffc  PUSH 0x6b27f8
005ce001  LEA EDX,[EBP + 0xffffff48]
005ce007  PUSH EDX
005ce008  CALL 0x00686d8e
005ce00d  ADD ESP,0x8
005ce010  JMP 0x005ce035
005ce012  PUSH 0x1
005ce014  PUSH 0x1
005ce016  PUSH 0x1
005ce018  LEA EAX,[EBP + 0xffffff48]
005ce01e  PUSH EAX
005ce01f  MOV ECX,dword ptr [EBP + 0xffffff44]
005ce025  PUSH ECX
005ce026  MOV EDX,dword ptr [EBP + 0xffffff40]
005ce02c  PUSH EDX
005ce02d  CALL 0x0064c8d0
005ce032  ADD ESP,0x18
005ce035  JMP 0x005ce11c
005ce03a  MOV EAX,dword ptr [EBP + 0x8]
005ce03d  CMP dword ptr [EAX + 0x4cc],0x0
005ce044  JNZ 0x005ce078
005ce046  MOV ECX,dword ptr [EBP + 0x8]
005ce049  CMP dword ptr [ECX + 0x4d0],0x0
005ce050  JNZ 0x005ce078
005ce052  PUSH 0x6d2c34
005ce057  CALL 0x00630f40
005ce05c  ADD ESP,0x4
005ce05f  PUSH EAX
005ce060  MOV EDX,dword ptr [EBP + 0xffffff34]
005ce066  MOV EAX,dword ptr [EDX]
005ce068  MOV ECX,dword ptr [EBP + 0xffffff34]
005ce06e  MOV EDX,dword ptr [EAX + 0xb4]
005ce074  CALL EDX
005ce076  JMP 0x005ce0d1
005ce078  MOV ECX,dword ptr [EBP + 0x8]
005ce07b  CALL 0x005d58d0
005ce080  MOVZX EAX,AL
005ce083  TEST EAX,EAX
005ce085  JZ 0x005ce0ad
005ce087  PUSH 0x6d2c18
005ce08c  CALL 0x00630f40
005ce091  ADD ESP,0x4
005ce094  PUSH EAX
005ce095  MOV ECX,dword ptr [EBP + 0xffffff34]
005ce09b  MOV EDX,dword ptr [ECX]
005ce09d  MOV ECX,dword ptr [EBP + 0xffffff34]
005ce0a3  MOV EAX,dword ptr [EDX + 0xb4]
005ce0a9  CALL EAX
005ce0ab  JMP 0x005ce0d1
005ce0ad  PUSH 0x6d2bfc
005ce0b2  CALL 0x00630f40
005ce0b7  ADD ESP,0x4
005ce0ba  PUSH EAX
005ce0bb  MOV ECX,dword ptr [EBP + 0xffffff34]
005ce0c1  MOV EDX,dword ptr [ECX]
005ce0c3  MOV ECX,dword ptr [EBP + 0xffffff34]
005ce0c9  MOV EAX,dword ptr [EDX + 0xb4]
005ce0cf  CALL EAX
005ce0d1  PUSH 0x0
005ce0d3  PUSH 0x1
005ce0d5  PUSH 0x1
005ce0d7  LEA ECX,[EBP + 0xffffff48]
005ce0dd  PUSH ECX
005ce0de  MOV EDX,dword ptr [EBP + 0xffffff3c]
005ce0e4  PUSH EDX
005ce0e5  MOV EAX,dword ptr [EBP + 0xffffff38]
005ce0eb  PUSH EAX
005ce0ec  CALL 0x0064c8d0
005ce0f1  ADD ESP,0x18
005ce0f4  JMP 0x005ce11c
005ce0f6  PUSH 0x1
005ce0f8  PUSH 0x1
005ce0fa  PUSH 0x1
005ce0fc  LEA ECX,[EBP + 0xffffff48]
005ce102  PUSH ECX
005ce103  MOV EDX,dword ptr [EBP + 0x8]
005ce106  MOV EAX,dword ptr [EDX + 0x4c8]
005ce10c  PUSH EAX
005ce10d  MOV ECX,dword ptr [EDX + 0x4c4]
005ce113  PUSH ECX
005ce114  CALL 0x0064c8d0
005ce119  ADD ESP,0x18
005ce11c  PUSH -0x1
005ce11e  PUSH 0x5
005ce120  PUSH 0x1
005ce122  MOV EDX,dword ptr [EBP + -0x4]
005ce125  IMUL EDX,EDX,0xd
005ce128  ADD EDX,0x1d
005ce12b  PUSH EDX
005ce12c  PUSH 0x46
005ce12e  PUSH 0xf
005ce130  PUSH 0x69
005ce132  PUSH 0x23
005ce134  LEA EAX,[EBP + 0xffffff48]
005ce13a  PUSH EAX
005ce13b  MOV ECX,dword ptr [EBP + -0x4]
005ce13e  ADD ECX,0x4
005ce141  PUSH ECX
005ce142  PUSH 0x0
005ce144  MOV ECX,dword ptr [EBP + 0xffffff1c]
005ce14a  CALL 0x005fa5b0
005ce14f  JMP 0x005cdf21
005ce154  PUSH -0x1
005ce156  PUSH 0x11
005ce158  PUSH 0x1
005ce15a  PUSH 0x6
005ce15c  PUSH 0x5
005ce15e  PUSH 0xf
005ce160  PUSH 0x8c
005ce165  PUSH 0x1f
005ce167  PUSH 0x6b27f8
005ce16c  PUSH 0x8
005ce16e  PUSH 0x0
005ce170  MOV ECX,dword ptr [EBP + 0xffffff1c]
005ce176  CALL 0x005fa5b0
005ce17b  MOV dword ptr [EBP + 0xffffff34],EAX
005ce181  MOV ECX,dword ptr [EBP + 0x8]
005ce184  CALL 0x0063aac0
005ce189  ADD EAX,0x4
005ce18c  PUSH EAX
005ce18d  MOV ECX,dword ptr [EBP + 0xffffff34]
005ce193  CALL 0x005ee710
005ce198  MOV ECX,dword ptr [EBP + 0x8]
005ce19b  CALL 0x0063aac0
005ce1a0  MOV EDX,dword ptr [EAX]
005ce1a2  MOV dword ptr [EBP + 0xffffff28],EDX
005ce1a8  CMP dword ptr [EBP + 0xffffff28],0x2
005ce1af  JZ 0x005ce1d6
005ce1b1  MOV ECX,dword ptr [EBP + 0x8]
005ce1b4  CALL 0x0063aac0
005ce1b9  MOV EAX,dword ptr [EAX]
005ce1bb  MOV dword ptr [EBP + 0xffffff24],EAX
005ce1c1  CMP dword ptr [EBP + 0xffffff24],0x3
005ce1c8  JZ 0x005ce1d6
005ce1ca  MOV dword ptr [EBP + 0xffffff14],0x0
005ce1d4  JMP 0x005ce1e0
005ce1d6  MOV dword ptr [EBP + 0xffffff14],0x1
005ce1e0  MOVZX ECX,byte ptr [EBP + 0xffffff14]
005ce1e7  TEST ECX,ECX
005ce1e9  JZ 0x005ce228
005ce1eb  MOV ECX,dword ptr [EBP + 0x8]
005ce1ee  CALL 0x005d52e0
005ce1f3  MOV DL,byte ptr [EAX + 0x2a]
005ce1f6  MOV byte ptr [EBP + 0xffffff23],DL
005ce1fc  PUSH 0x0
005ce1fe  PUSH 0xff
005ce203  MOVSX EAX,byte ptr [EBP + 0xffffff23]
005ce20a  PUSH EAX
005ce20b  PUSH 0x1
005ce20d  PUSH 0x8
005ce20f  PUSH 0x92
005ce214  PUSH 0x41d
005ce219  PUSH 0x0
005ce21b  PUSH 0x0
005ce21d  MOV ECX,dword ptr [EBP + 0xffffff1c]
005ce223  CALL 0x005f9ce0
005ce228  MOV ECX,dword ptr [EBP + -0x20]
005ce22b  XOR ECX,EBP
005ce22d  CALL 0x00686d72
005ce232  MOV ESP,EBP
005ce234  POP EBP
005ce235  RET 0x4
