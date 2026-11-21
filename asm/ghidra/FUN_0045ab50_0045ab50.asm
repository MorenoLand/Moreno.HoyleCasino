; FUN_0045ab50  0045ab50
0045ab50  PUSH EBP
0045ab51  MOV EBP,ESP
0045ab53  SUB ESP,0x24
0045ab56  MOV EAX,[0x00781870]
0045ab5b  XOR EAX,EBP
0045ab5d  MOV dword ptr [EBP + -0x10],EAX
0045ab60  MOV dword ptr [EBP + -0x20],ECX
0045ab63  MOV word ptr [EBP + -0x1c],0x24
0045ab69  MOV word ptr [EBP + -0x1a],0x15
0045ab6f  MOV word ptr [EBP + -0x18],0x18
0045ab75  MOV word ptr [EBP + -0x16],0x13
0045ab7b  MOV word ptr [EBP + -0x14],0x12
0045ab81  MOV word ptr [EBP + -0x4],0x3
0045ab87  MOV EAX,[0x00790740]
0045ab8c  MOV ECX,dword ptr [EAX + 0x44]
0045ab8f  MOV dword ptr [EBP + -0xc],ECX
0045ab92  MOV EDX,dword ptr [0x00790740]
0045ab98  MOV EAX,dword ptr [EDX + 0x40]
0045ab9b  MOV dword ptr [EBP + -0x8],EAX
0045ab9e  MOV ECX,dword ptr [EBP + -0x20]
0045aba1  CALL 0x005fc360
0045aba6  MOV dword ptr [EBP + -0x24],EAX
0045aba9  CMP dword ptr [EBP + -0x24],0x0
0045abad  JZ 0x0045abc8
0045abaf  CMP dword ptr [EBP + -0x24],0x1
0045abb3  JZ 0x0045ac51
0045abb9  CMP dword ptr [EBP + -0x24],0x2
0045abbd  JZ 0x0045ae52
0045abc3  JMP 0x0045ae7d
0045abc8  MOV word ptr [0x00790730],0x0
0045abd1  MOV word ptr [0x0079072c],0x0
0045abda  MOV ECX,dword ptr [EBP + -0xc]
0045abdd  CALL 0x005eb240
0045abe2  MOV [0x00790728],AX
0045abe8  MOV ECX,dword ptr [EBP + -0x8]
0045abeb  CALL 0x005eb240
0045abf0  MOV [0x00790724],AX
0045abf6  PUSH 0x32
0045abf8  MOV ECX,dword ptr [EBP + -0xc]
0045abfb  MOV EDX,dword ptr [ECX]
0045abfd  MOV ECX,dword ptr [EBP + -0xc]
0045ac00  MOV EAX,dword ptr [EDX + 0x6c]
0045ac03  CALL EAX
0045ac05  PUSH 0x33
0045ac07  MOV ECX,dword ptr [EBP + -0x8]
0045ac0a  MOV EDX,dword ptr [ECX]
0045ac0c  MOV ECX,dword ptr [EBP + -0x8]
0045ac0f  MOV EAX,dword ptr [EDX + 0x6c]
0045ac12  CALL EAX
0045ac14  PUSH 0x0
0045ac16  MOV ECX,dword ptr [EBP + -0xc]
0045ac19  MOV EDX,dword ptr [ECX]
0045ac1b  MOV ECX,dword ptr [EBP + -0xc]
0045ac1e  MOV EAX,dword ptr [EDX + 0xb0]
0045ac24  CALL EAX
0045ac26  PUSH 0x0
0045ac28  MOV ECX,dword ptr [EBP + -0x8]
0045ac2b  MOV EDX,dword ptr [ECX]
0045ac2d  MOV ECX,dword ptr [EBP + -0x8]
0045ac30  MOV EAX,dword ptr [EDX + 0xb0]
0045ac36  CALL EAX
0045ac38  MOVSX ECX,word ptr [EBP + -0x4]
0045ac3c  PUSH ECX
0045ac3d  PUSH 0x1
0045ac3f  MOV EDX,dword ptr [EBP + -0x20]
0045ac42  MOV EAX,dword ptr [EDX]
0045ac44  MOV ECX,dword ptr [EBP + -0x20]
0045ac47  MOV EDX,dword ptr [EAX + 0x8]
0045ac4a  CALL EDX
0045ac4c  JMP 0x0045ae7d
0045ac51  MOV AX,[0x00790730]
0045ac57  ADD AX,0x1
0045ac5b  MOV [0x00790730],AX
0045ac61  MOVSX ECX,word ptr [0x00790730]
0045ac68  MOVSX EDX,word ptr [0x00790728]
0045ac6f  CMP ECX,EDX
0045ac71  JG 0x0045ac8b
0045ac73  MOVSX EAX,word ptr [0x00790730]
0045ac7a  PUSH EAX
0045ac7b  MOV ECX,dword ptr [EBP + -0xc]
0045ac7e  MOV EDX,dword ptr [ECX]
0045ac80  MOV ECX,dword ptr [EBP + -0xc]
0045ac83  MOV EAX,dword ptr [EDX + 0xb0]
0045ac89  CALL EAX
0045ac8b  MOVSX ECX,word ptr [0x00790730]
0045ac92  MOVSX EDX,word ptr [0x00790724]
0045ac99  CMP ECX,EDX
0045ac9b  JG 0x0045acb5
0045ac9d  MOVSX EAX,word ptr [0x00790730]
0045aca4  PUSH EAX
0045aca5  MOV ECX,dword ptr [EBP + -0x8]
0045aca8  MOV EDX,dword ptr [ECX]
0045acaa  MOV ECX,dword ptr [EBP + -0x8]
0045acad  MOV EAX,dword ptr [EDX + 0xb0]
0045acb3  CALL EAX
0045acb5  MOVSX ECX,word ptr [0x00790730]
0045acbc  CMP ECX,0x9
0045acbf  JNZ 0x0045acfc
0045acc1  MOV EDX,dword ptr [0x00790740]
0045acc7  MOV EAX,dword ptr [EDX + 0x48]
0045acca  MOV ECX,dword ptr [0x00790740]
0045acd0  MOV ECX,dword ptr [ECX + 0x48]
0045acd3  MOV EDX,dword ptr [EAX]
0045acd5  MOV EAX,dword ptr [EDX + 0x70]
0045acd8  CALL EAX
0045acda  PUSH 0x0
0045acdc  MOV ECX,dword ptr [0x00790740]
0045ace2  MOV EDX,dword ptr [ECX + 0x48]
0045ace5  MOV EAX,[0x00790740]
0045acea  MOV ECX,dword ptr [EAX + 0x48]
0045aced  MOV EDX,dword ptr [EDX]
0045acef  MOV EAX,dword ptr [EDX + 0xb0]
0045acf5  CALL EAX
0045acf7  JMP 0x0045adfa
0045acfc  MOV ECX,dword ptr [EBP + -0x20]
0045acff  CMP dword ptr [ECX + 0x20],0x0
0045ad03  JZ 0x0045ad0e
0045ad05  MOV EDX,dword ptr [EBP + -0x20]
0045ad08  CMP dword ptr [EDX + 0x20],0x2
0045ad0c  JNZ 0x0045ad3d
0045ad0e  MOVSX EAX,word ptr [0x00790730]
0045ad15  CMP EAX,0x11
0045ad18  JNZ 0x0045ad3d
0045ad1a  PUSH 0x33
0045ad1c  MOV ECX,dword ptr [EBP + -0xc]
0045ad1f  MOV EDX,dword ptr [ECX]
0045ad21  MOV ECX,dword ptr [EBP + -0xc]
0045ad24  MOV EAX,dword ptr [EDX + 0x6c]
0045ad27  CALL EAX
0045ad29  PUSH 0x32
0045ad2b  MOV ECX,dword ptr [EBP + -0x8]
0045ad2e  MOV EDX,dword ptr [ECX]
0045ad30  MOV ECX,dword ptr [EBP + -0x8]
0045ad33  MOV EAX,dword ptr [EDX + 0x6c]
0045ad36  CALL EAX
0045ad38  JMP 0x0045adfa
0045ad3d  MOVSX ECX,word ptr [0x00790730]
0045ad44  MOV EDX,dword ptr [EBP + -0x20]
0045ad47  MOV EAX,dword ptr [EDX + 0x20]
0045ad4a  MOVSX EDX,word ptr [EBP + EAX*0x2 + -0x1c]
0045ad4f  CMP ECX,EDX
0045ad51  JLE 0x0045adfa
0045ad57  MOVSX EAX,word ptr [0x0079072c]
0045ad5e  CMP EAX,0x7
0045ad61  JGE 0x0045adfa
0045ad67  MOVSX ECX,word ptr [0x0079072c]
0045ad6e  CMP ECX,0x6
0045ad71  JNZ 0x0045ad96
0045ad73  MOV EDX,dword ptr [0x00790738]
0045ad79  MOV ECX,dword ptr [EDX + 0x58]
0045ad7c  CALL 0x006436c0
0045ad81  PUSH EAX
0045ad82  MOV EAX,dword ptr [EBP + -0x20]
0045ad85  MOV ECX,dword ptr [EAX + 0x20]
0045ad88  PUSH ECX
0045ad89  MOV ECX,dword ptr [0x00790738]
0045ad8f  CALL 0x00460500
0045ad94  JMP 0x0045add8
0045ad96  MOV EDX,dword ptr [0x00790738]
0045ad9c  MOV ECX,dword ptr [EDX + 0x58]
0045ad9f  CALL 0x006436c0
0045ada4  PUSH EAX
0045ada5  MOV EAX,dword ptr [EBP + -0x20]
0045ada8  MOV ECX,dword ptr [EAX + 0x20]
0045adab  PUSH ECX
0045adac  MOV ECX,dword ptr [0x00790738]
0045adb2  CALL 0x00460500
0045adb7  MOV EDX,dword ptr [0x00790738]
0045adbd  MOV ECX,dword ptr [EDX + 0x58]
0045adc0  CALL 0x006436c0
0045adc5  PUSH EAX
0045adc6  MOV EAX,dword ptr [EBP + -0x20]
0045adc9  MOV ECX,dword ptr [EAX + 0x20]
0045adcc  PUSH ECX
0045adcd  MOV ECX,dword ptr [0x00790738]
0045add3  CALL 0x00460500
0045add8  MOV ECX,dword ptr [0x00790740]
0045adde  CALL 0x004587e0
0045ade3  MOVSX EDX,word ptr [0x0079072c]
0045adea  ADD EDX,0x2
0045aded  MOV word ptr [0x0079072c],DX
0045adf4  MOV word ptr [EBP + -0x4],0x2
0045adfa  MOVSX EAX,word ptr [0x00790730]
0045ae01  MOVSX ECX,word ptr [0x00790728]
0045ae08  CMP EAX,ECX
0045ae0a  JL 0x0045ae1e
0045ae0c  MOVSX EDX,word ptr [0x00790730]
0045ae13  MOVSX EAX,word ptr [0x00790724]
0045ae1a  CMP EDX,EAX
0045ae1c  JGE 0x0045ae2f
0045ae1e  PUSH 0x1
0045ae20  MOV ECX,dword ptr [EBP + -0x20]
0045ae23  MOV EDX,dword ptr [ECX]
0045ae25  MOV ECX,dword ptr [EBP + -0x20]
0045ae28  MOV EAX,dword ptr [EDX + 0x4]
0045ae2b  CALL EAX
0045ae2d  JMP 0x0045ae3e
0045ae2f  PUSH 0x2
0045ae31  MOV ECX,dword ptr [EBP + -0x20]
0045ae34  MOV EDX,dword ptr [ECX]
0045ae36  MOV ECX,dword ptr [EBP + -0x20]
0045ae39  MOV EAX,dword ptr [EDX + 0x4]
0045ae3c  CALL EAX
0045ae3e  MOVSX ECX,word ptr [EBP + -0x4]
0045ae42  PUSH ECX
0045ae43  MOV EDX,dword ptr [EBP + -0x20]
0045ae46  MOV EAX,dword ptr [EDX]
0045ae48  MOV ECX,dword ptr [EBP + -0x20]
0045ae4b  MOV EDX,dword ptr [EAX + 0x1c]
0045ae4e  CALL EDX
0045ae50  JMP 0x0045ae7d
0045ae52  MOV EAX,dword ptr [EBP + -0x20]
0045ae55  CMP dword ptr [EAX + 0x10],0x0
0045ae59  JZ 0x0045ae70
0045ae5b  PUSH 0x0
0045ae5d  MOV ECX,dword ptr [EBP + -0x20]
0045ae60  MOV EDX,dword ptr [ECX + 0x10]
0045ae63  MOV EAX,dword ptr [EBP + -0x20]
0045ae66  MOV ECX,dword ptr [EAX + 0x10]
0045ae69  MOV EDX,dword ptr [EDX]
0045ae6b  MOV EAX,dword ptr [EDX + 0x1c]
0045ae6e  CALL EAX
0045ae70  PUSH 0x0
0045ae72  MOV ECX,dword ptr [EBP + -0x20]
0045ae75  MOV ECX,dword ptr [ECX + 0x10]
0045ae78  CALL 0x005fc420
0045ae7d  MOV ECX,dword ptr [EBP + -0x10]
0045ae80  XOR ECX,EBP
0045ae82  CALL 0x00686d72
0045ae87  MOV ESP,EBP
0045ae89  POP EBP
0045ae8a  RET
