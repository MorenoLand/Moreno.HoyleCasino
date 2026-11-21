; FUN_004fb890  004fb890
004fb890  PUSH EBP
004fb891  MOV EBP,ESP
004fb893  SUB ESP,0x44
004fb896  PUSH ESI
004fb897  MOV dword ptr [EBP + -0x40],ECX
004fb89a  MOV EAX,[0x00791364]
004fb89f  MOV ECX,dword ptr [EAX + 0xf4]
004fb8a5  MOV dword ptr [EBP + -0x10],ECX
004fb8a8  MOV EDX,dword ptr [EBP + -0x10]
004fb8ab  PUSH EDX
004fb8ac  CALL 0x00520540
004fb8b1  ADD ESP,0x4
004fb8b4  MOV dword ptr [EBP + -0xc],EAX
004fb8b7  MOV EAX,dword ptr [EBP + -0xc]
004fb8ba  MOV ECX,dword ptr [0x00791364]
004fb8c0  MOV EDX,dword ptr [ECX + 0xec]
004fb8c6  MOV dword ptr [EAX + 0x14],EDX
004fb8c9  MOV EAX,dword ptr [EBP + -0xc]
004fb8cc  MOV ECX,dword ptr [0x00791364]
004fb8d2  MOV EDX,dword ptr [ECX + 0xf0]
004fb8d8  MOV dword ptr [EAX + 0x18],EDX
004fb8db  MOV ECX,dword ptr [0x00791364]
004fb8e1  CALL 0x0047bbc0
004fb8e6  MOV ECX,dword ptr [EBP + -0xc]
004fb8e9  MOV word ptr [ECX + 0x3c],AX
004fb8ed  MOV ECX,dword ptr [0x00791364]
004fb8f3  CALL 0x0047cb80
004fb8f8  MOV EDX,dword ptr [EBP + -0xc]
004fb8fb  MOV word ptr [EDX + 0x3e],AX
004fb8ff  MOV ECX,dword ptr [0x00791364]
004fb905  CALL 0x0047ce60
004fb90a  MOV ECX,dword ptr [EBP + -0xc]
004fb90d  MOV dword ptr [ECX + 0x8],EAX
004fb910  MOV EDX,dword ptr [0x00791364]
004fb916  MOV EAX,dword ptr [EDX + 0x100]
004fb91c  MOV dword ptr [EBP + -0x24],EAX
004fb91f  MOV ECX,dword ptr [EBP + -0xc]
004fb922  MOV EDX,dword ptr [EBP + -0x24]
004fb925  MOV dword ptr [ECX + 0x38],EDX
004fb928  MOV EAX,[0x00791364]
004fb92d  MOV CL,byte ptr [EAX + 0x104]
004fb933  MOV byte ptr [EBP + -0x25],CL
004fb936  MOV EDX,dword ptr [EBP + -0xc]
004fb939  MOV AL,byte ptr [EBP + -0x25]
004fb93c  MOV byte ptr [EDX + 0x28],AL
004fb93f  MOV ECX,dword ptr [0x00791364]
004fb945  MOV EDX,dword ptr [ECX + 0xf8]
004fb94b  MOV dword ptr [EBP + -0x2c],EDX
004fb94e  MOV EAX,dword ptr [EBP + -0xc]
004fb951  MOV ECX,dword ptr [EBP + -0x2c]
004fb954  MOV dword ptr [EAX + 0x4],ECX
004fb957  MOV EDX,dword ptr [0x00791364]
004fb95d  MOV EAX,dword ptr [EDX + 0xfc]
004fb963  MOV dword ptr [EBP + -0x30],EAX
004fb966  MOV ECX,dword ptr [EBP + -0xc]
004fb969  MOV EDX,dword ptr [EBP + -0x30]
004fb96c  MOV dword ptr [ECX + 0x24],EDX
004fb96f  MOV ECX,dword ptr [0x00791364]
004fb975  CALL 0x0047a510
004fb97a  MOV ECX,dword ptr [EBP + -0xc]
004fb97d  MOV dword ptr [ECX + 0x20],EAX
004fb980  MOV dword ptr [EBP + -0x8],0x0
004fb987  JMP 0x004fb992
004fb989  MOV EDX,dword ptr [EBP + -0x8]
004fb98c  ADD EDX,0x1
004fb98f  MOV dword ptr [EBP + -0x8],EDX
004fb992  CMP dword ptr [EBP + -0x8],0x3
004fb996  JGE 0x004fb9b7
004fb998  MOV EAX,dword ptr [EBP + -0x8]
004fb99b  MOV ECX,dword ptr [0x00791364]
004fb9a1  CMP dword ptr [ECX + EAX*0x4 + 0x114],0x0
004fb9a9  SETNZ DL
004fb9ac  MOV EAX,dword ptr [EBP + -0xc]
004fb9af  ADD EAX,dword ptr [EBP + -0x8]
004fb9b2  MOV byte ptr [EAX + 0x29],DL
004fb9b5  JMP 0x004fb989
004fb9b7  MOV dword ptr [EBP + -0x8],0x0
004fb9be  JMP 0x004fb9c9
004fb9c0  MOV ECX,dword ptr [EBP + -0x8]
004fb9c3  ADD ECX,0x1
004fb9c6  MOV dword ptr [EBP + -0x8],ECX
004fb9c9  CMP dword ptr [EBP + -0x8],0x3
004fb9cd  JGE 0x004fb9eb
004fb9cf  MOV EDX,dword ptr [EBP + -0x8]
004fb9d2  MOV EAX,dword ptr [EBP + -0xc]
004fb9d5  MOV ECX,dword ptr [EBP + -0x8]
004fb9d8  MOV ESI,dword ptr [0x00791364]
004fb9de  MOV ECX,dword ptr [ESI + ECX*0x4 + 0x108]
004fb9e5  MOV dword ptr [EAX + EDX*0x4 + 0x2c],ECX
004fb9e9  JMP 0x004fb9c0
004fb9eb  MOV dword ptr [EBP + -0x8],0x0
004fb9f2  JMP 0x004fb9fd
004fb9f4  MOV EDX,dword ptr [EBP + -0x8]
004fb9f7  ADD EDX,0x1
004fb9fa  MOV dword ptr [EBP + -0x8],EDX
004fb9fd  CMP dword ptr [EBP + -0x8],0x7
004fba01  JGE 0x004fba1f
004fba03  MOV EAX,dword ptr [EBP + -0x8]
004fba06  MOV ECX,dword ptr [EBP + -0xc]
004fba09  MOV EDX,dword ptr [EBP + -0x8]
004fba0c  MOV ESI,dword ptr [0x00791364]
004fba12  MOV EDX,dword ptr [ESI + EDX*0x4 + 0x3b4]
004fba19  MOV dword ptr [ECX + EAX*0x4 + 0x40],EDX
004fba1d  JMP 0x004fb9f4
004fba1f  MOV dword ptr [EBP + -0x8],0x0
004fba26  JMP 0x004fba31
004fba28  MOV EAX,dword ptr [EBP + -0x8]
004fba2b  ADD EAX,0x1
004fba2e  MOV dword ptr [EBP + -0x8],EAX
004fba31  CMP dword ptr [EBP + -0x8],0x7
004fba35  JGE 0x004fbb50
004fba3b  MOV ECX,dword ptr [EBP + -0x8]
004fba3e  PUSH ECX
004fba3f  MOV ECX,dword ptr [0x00791364]
004fba45  CALL 0x0047e390
004fba4a  MOV dword ptr [EBP + -0x20],EAX
004fba4d  MOV EDX,dword ptr [EBP + -0x20]
004fba50  MOV EAX,dword ptr [EDX + 0x4]
004fba53  MOV dword ptr [EBP + -0x18],EAX
004fba56  MOV ECX,dword ptr [EBP + -0x8]
004fba59  IMUL ECX,ECX,0x7c
004fba5c  MOV EDX,dword ptr [EBP + -0xc]
004fba5f  MOV EAX,dword ptr [EBP + -0x18]
004fba62  MOV dword ptr [EDX + ECX*0x1 + 0xe8],EAX
004fba69  MOV ECX,dword ptr [EBP + -0x20]
004fba6c  CALL 0x004c6cb0
004fba71  MOV dword ptr [EBP + -0x1c],EAX
004fba74  MOV ECX,dword ptr [EBP + -0x8]
004fba77  IMUL ECX,ECX,0x7c
004fba7a  MOV EDX,dword ptr [EBP + -0xc]
004fba7d  MOV EAX,dword ptr [EBP + -0x1c]
004fba80  MOV dword ptr [EDX + ECX*0x1 + 0xe4],EAX
004fba87  CMP dword ptr [EBP + -0x1c],0x0
004fba8b  JNZ 0x004fba96
004fba8d  MOV dword ptr [EBP + -0x44],0xffffffff
004fba94  JMP 0x004fbaa1
004fba96  MOV ECX,dword ptr [EBP + -0x20]
004fba99  CALL 0x004c6a70
004fba9e  MOV dword ptr [EBP + -0x44],EAX
004fbaa1  MOV ECX,dword ptr [EBP + -0x8]
004fbaa4  IMUL ECX,ECX,0x7c
004fbaa7  MOV EDX,dword ptr [EBP + -0xc]
004fbaaa  MOV EAX,dword ptr [EBP + -0x44]
004fbaad  MOV dword ptr [EDX + ECX*0x1 + 0xe0],EAX
004fbab4  MOV ECX,dword ptr [EBP + -0x18]
004fbab7  PUSH ECX
004fbab8  CALL 0x005dcb00
004fbabd  ADD ESP,0x4
004fbac0  MOV dword ptr [EBP + -0x14],EAX
004fbac3  MOV ECX,dword ptr [EBP + -0x20]
004fbac6  CALL 0x004c6150
004fbacb  PUSH EAX
004fbacc  MOV EDX,dword ptr [EBP + -0x8]
004fbacf  IMUL EDX,EDX,0x7c
004fbad2  MOV EAX,dword ptr [EBP + -0xc]
004fbad5  LEA ECX,[EAX + EDX*0x1 + 0x7c]
004fbad9  PUSH ECX
004fbada  CALL 0x00686d8e
004fbadf  ADD ESP,0x8
004fbae2  MOV ECX,dword ptr [EBP + -0x20]
004fbae5  CALL 0x004c61b0
004fbaea  MOVZX EDX,AL
004fbaed  TEST EDX,EDX
004fbaef  JNZ 0x004fbb4b
004fbaf1  MOV EAX,dword ptr [EBP + -0x20]
004fbaf4  MOV ECX,dword ptr [EAX + 0x74]
004fbaf7  MOV dword ptr [EBP + -0x34],ECX
004fbafa  MOV EDX,dword ptr [EBP + -0x8]
004fbafd  IMUL EDX,EDX,0x7c
004fbb00  MOV EAX,dword ptr [EBP + -0xc]
004fbb03  MOV ECX,dword ptr [EBP + -0x34]
004fbb06  MOV dword ptr [EAX + EDX*0x1 + 0xec],ECX
004fbb0d  MOV EDX,dword ptr [EBP + -0x20]
004fbb10  MOV EAX,dword ptr [EDX + 0x3fc]
004fbb16  MOV dword ptr [EBP + -0x38],EAX
004fbb19  MOV ECX,dword ptr [EBP + -0x8]
004fbb1c  IMUL ECX,ECX,0x7c
004fbb1f  MOV EDX,dword ptr [EBP + -0xc]
004fbb22  MOV EAX,dword ptr [EBP + -0x38]
004fbb25  MOV dword ptr [EDX + ECX*0x1 + 0xf0],EAX
004fbb2c  MOV ECX,dword ptr [EBP + -0x20]
004fbb2f  MOV EDX,dword ptr [ECX + 0x400]
004fbb35  MOV dword ptr [EBP + -0x3c],EDX
004fbb38  MOV EAX,dword ptr [EBP + -0x8]
004fbb3b  IMUL EAX,EAX,0x7c
004fbb3e  MOV ECX,dword ptr [EBP + -0xc]
004fbb41  MOV EDX,dword ptr [EBP + -0x3c]
004fbb44  MOV dword ptr [ECX + EAX*0x1 + 0xf4],EDX
004fbb4b  JMP 0x004fba28
004fbb50  MOV dword ptr [EBP + -0x8],0x0
004fbb57  JMP 0x004fbb62
004fbb59  MOV EAX,dword ptr [EBP + -0x8]
004fbb5c  ADD EAX,0x1
004fbb5f  MOV dword ptr [EBP + -0x8],EAX
004fbb62  CMP dword ptr [EBP + -0x8],0x21
004fbb66  JGE 0x004fbc20
004fbb6c  MOV ECX,dword ptr [EBP + -0x8]
004fbb6f  IMUL ECX,ECX,0x14
004fbb72  MOV EDX,dword ptr [EBP + -0x8]
004fbb75  IMUL EDX,EDX,0x14
004fbb78  MOV EAX,dword ptr [EBP + -0xc]
004fbb7b  MOV ESI,dword ptr [0x00791364]
004fbb81  MOV ECX,dword ptr [ESI + ECX*0x1 + 0x120]
004fbb88  MOV dword ptr [EAX + EDX*0x1 + 0x3f4],ECX
004fbb8f  MOV EDX,dword ptr [EBP + -0x8]
004fbb92  IMUL EDX,EDX,0x14
004fbb95  MOV EAX,dword ptr [EBP + -0x8]
004fbb98  IMUL EAX,EAX,0x14
004fbb9b  MOV ECX,dword ptr [EBP + -0xc]
004fbb9e  MOV ESI,dword ptr [0x00791364]
004fbba4  MOV EDX,dword ptr [ESI + EDX*0x1 + 0x12c]
004fbbab  MOV dword ptr [ECX + EAX*0x1 + 0x400],EDX
004fbbb2  MOV EAX,dword ptr [EBP + -0x8]
004fbbb5  IMUL EAX,EAX,0x14
004fbbb8  MOV ECX,dword ptr [EBP + -0x8]
004fbbbb  IMUL ECX,ECX,0x14
004fbbbe  MOV EDX,dword ptr [EBP + -0xc]
004fbbc1  MOV ESI,dword ptr [0x00791364]
004fbbc7  MOV EAX,dword ptr [ESI + EAX*0x1 + 0x124]
004fbbce  MOV dword ptr [EDX + ECX*0x1 + 0x3f8],EAX
004fbbd5  MOV ECX,dword ptr [EBP + -0x8]
004fbbd8  IMUL ECX,ECX,0x14
004fbbdb  MOV EDX,dword ptr [EBP + -0x8]
004fbbde  IMUL EDX,EDX,0x14
004fbbe1  MOV EAX,dword ptr [EBP + -0xc]
004fbbe4  MOV ESI,dword ptr [0x00791364]
004fbbea  MOV ECX,dword ptr [ESI + ECX*0x1 + 0x130]
004fbbf1  MOV dword ptr [EAX + EDX*0x1 + 0x404],ECX
004fbbf8  MOV EDX,dword ptr [EBP + -0x8]
004fbbfb  IMUL EDX,EDX,0x14
004fbbfe  MOV EAX,dword ptr [EBP + -0x8]
004fbc01  IMUL EAX,EAX,0x14
004fbc04  MOV ECX,dword ptr [EBP + -0xc]
004fbc07  MOV ESI,dword ptr [0x00791364]
004fbc0d  MOV DL,byte ptr [ESI + EDX*0x1 + 0x128]
004fbc14  MOV byte ptr [ECX + EAX*0x1 + 0x3fc],DL
004fbc1b  JMP 0x004fbb59
004fbc20  MOV dword ptr [EBP + -0x8],0x0
004fbc27  JMP 0x004fbc32
004fbc29  MOV EAX,dword ptr [EBP + -0x8]
004fbc2c  ADD EAX,0x1
004fbc2f  MOV dword ptr [EBP + -0x8],EAX
004fbc32  CMP dword ptr [EBP + -0x8],0x7
004fbc36  JGE 0x004fbc54
004fbc38  MOV ECX,dword ptr [EBP + -0x8]
004fbc3b  MOV EDX,dword ptr [EBP + -0xc]
004fbc3e  MOV EAX,dword ptr [EBP + -0x8]
004fbc41  MOV ESI,dword ptr [0x00791364]
004fbc47  MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3e4]
004fbc4e  MOV dword ptr [EDX + ECX*0x4 + 0x5c],EAX
004fbc52  JMP 0x004fbc29
004fbc54  MOV ECX,dword ptr [EBP + -0xc]
004fbc57  MOV EDX,dword ptr [0x00791364]
004fbc5d  MOV EAX,dword ptr [EDX + 0x400]
004fbc63  MOV dword ptr [ECX + 0x78],EAX
004fbc66  MOV ECX,dword ptr [0x0162ee84]
004fbc6c  CALL 0x006375b0
004fbc71  MOV ECX,EAX
004fbc73  CALL 0x0063b0a0
004fbc78  CALL 0x00520d60
004fbc7d  MOV dword ptr [EBP + -0x4],EAX
004fbc80  MOV ECX,dword ptr [EBP + -0x4]
004fbc83  PUSH ECX
004fbc84  CALL 0x005209d0
004fbc89  ADD ESP,0x4
004fbc8c  POP ESI
004fbc8d  MOV ESP,EBP
004fbc8f  POP EBP
004fbc90  RET
