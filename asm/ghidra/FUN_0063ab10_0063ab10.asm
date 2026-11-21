; FUN_0063ab10  0063ab10
0063ab10  PUSH EBP
0063ab11  MOV EBP,ESP
0063ab13  PUSH -0x1
0063ab15  PUSH 0x6abb5d
0063ab1a  MOV EAX,FS:[0x0]
0063ab20  PUSH EAX
0063ab21  SUB ESP,0x444
0063ab27  MOV EAX,[0x00781870]
0063ab2c  XOR EAX,EBP
0063ab2e  MOV dword ptr [EBP + -0x10],EAX
0063ab31  PUSH EAX
0063ab32  LEA EAX,[EBP + -0xc]
0063ab35  MOV FS:[0x0],EAX
0063ab3b  MOV dword ptr [EBP + 0xfffffbb8],ECX
0063ab41  MOV byte ptr [EBP + 0xfffffbec],0x0
0063ab48  PUSH 0x3ff
0063ab4d  PUSH 0x0
0063ab4f  LEA EAX,[EBP + 0xfffffbed]
0063ab55  PUSH EAX
0063ab56  CALL 0x00686fa2
0063ab5b  ADD ESP,0xc
0063ab5e  MOV ECX,dword ptr [EBP + 0x8]
0063ab61  PUSH ECX
0063ab62  LEA EDX,[EBP + 0xfffffbec]
0063ab68  PUSH EDX
0063ab69  CALL 0x00686ec6
0063ab6e  ADD ESP,0x8
0063ab71  PUSH 0x6c2d28
0063ab76  LEA EAX,[EBP + 0xfffffbec]
0063ab7c  PUSH EAX
0063ab7d  CALL 0x005ea9c0
0063ab82  ADD ESP,0x8
0063ab85  MOV dword ptr [EBP + 0xfffffbe4],EAX
0063ab8b  CMP dword ptr [EBP + 0xfffffbe4],0x0
0063ab92  JZ 0x0063b07a
0063ab98  MOV ECX,dword ptr [EBP + 0xfffffbe4]
0063ab9e  PUSH ECX
0063ab9f  PUSH 0x1
0063aba1  PUSH 0x4
0063aba3  LEA EDX,[EBP + 0xfffffbdc]
0063aba9  PUSH EDX
0063abaa  CALL dword ptr [0x006b225c]
0063abb0  ADD ESP,0x10
0063abb3  MOV dword ptr [EBP + 0xfffffbe8],EAX
0063abb9  CMP dword ptr [EBP + 0xfffffbe8],-0x1
0063abc0  JNZ 0x0063abeb
0063abc2  MOV EAX,dword ptr [EBP + 0xfffffbe4]
0063abc8  PUSH EAX
0063abc9  CALL dword ptr [0x006b2258]
0063abcf  ADD ESP,0x4
0063abd2  LEA ECX,[EBP + 0xfffffbec]
0063abd8  PUSH ECX
0063abd9  CALL dword ptr [0x006b22a0]
0063abdf  ADD ESP,0x4
0063abe2  XOR AL,AL
0063abe4  JMP 0x0063b07c
0063abeb  MOV EDX,dword ptr [EBP + 0x8]
0063abee  PUSH EDX
0063abef  MOV EAX,dword ptr [EBP + 0xfffffbb8]
0063abf5  ADD EAX,0x10
0063abf8  PUSH EAX
0063abf9  CALL 0x00686d8e
0063abfe  ADD ESP,0x8
0063ac01  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063ac07  CALL 0x0063a2a0
0063ac0c  CMP dword ptr [EBP + 0xfffffbdc],0x384
0063ac16  JZ 0x0063ac61
0063ac18  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063ac1e  CALL 0x0063a4d0
0063ac23  PUSH 0x1
0063ac25  MOV ECX,dword ptr [EBP + 0xfffffbdc]
0063ac2b  PUSH ECX
0063ac2c  MOV EDX,dword ptr [EBP + 0xfffffbe4]
0063ac32  PUSH EDX
0063ac33  CALL dword ptr [0x006b230c]
0063ac39  ADD ESP,0xc
0063ac3c  CMP dword ptr [EBP + 0xfffffbdc],0x384
0063ac46  JZ 0x0063ac5f
0063ac48  PUSH 0xde
0063ac4d  PUSH 0x6db788
0063ac52  PUSH 0x6db76c
0063ac57  CALL 0x005e9f20
0063ac5c  ADD ESP,0xc
0063ac5f  JMP 0x0063aca8
0063ac61  MOV ECX,dword ptr [EBP + 0xfffffbe4]
0063ac67  PUSH ECX
0063ac68  PUSH 0x1
0063ac6a  PUSH 0x384
0063ac6f  MOV EDX,dword ptr [EBP + 0xfffffbb8]
0063ac75  ADD EDX,0x28
0063ac78  PUSH EDX
0063ac79  CALL dword ptr [0x006b225c]
0063ac7f  ADD ESP,0x10
0063ac82  MOV dword ptr [EBP + 0xfffffbe8],EAX
0063ac88  MOV EAX,dword ptr [EBP + 0xfffffbb8]
0063ac8e  MOV dword ptr [EAX + 0x3a4],0x0
0063ac98  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063ac9e  MOV dword ptr [ECX + 0x3a8],0x0
0063aca8  MOV EDX,dword ptr [EBP + 0xfffffbe4]
0063acae  PUSH EDX
0063acaf  PUSH 0x1
0063acb1  PUSH 0x4
0063acb3  LEA EAX,[EBP + 0xfffffbdc]
0063acb9  PUSH EAX
0063acba  CALL dword ptr [0x006b225c]
0063acc0  ADD ESP,0x10
0063acc3  MOV dword ptr [EBP + 0xfffffbe8],EAX
0063acc9  MOV ECX,dword ptr [0x0162ee84]
0063accf  MOV EDX,dword ptr [ECX]
0063acd1  MOV ECX,dword ptr [0x0162ee84]
0063acd7  MOV EAX,dword ptr [EDX + 0xf0]
0063acdd  CALL EAX
0063acdf  PUSH EAX
0063ace0  CALL 0x00686d82
0063ace5  ADD ESP,0x4
0063ace8  MOV dword ptr [EBP + 0xfffffbd4],EAX
0063acee  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063acf4  MOV EDX,dword ptr [EBP + 0xfffffbd4]
0063acfa  MOV dword ptr [ECX + 0x3a4],EDX
0063ad00  MOV EAX,[0x0162ee84]
0063ad05  MOV EDX,dword ptr [EAX]
0063ad07  MOV ECX,dword ptr [0x0162ee84]
0063ad0d  MOV EAX,dword ptr [EDX + 0xf0]
0063ad13  CALL EAX
0063ad15  TEST EAX,EAX
0063ad17  JZ 0x0063add2
0063ad1d  MOV ECX,dword ptr [0x0162ee84]
0063ad23  MOV EDX,dword ptr [ECX]
0063ad25  MOV ECX,dword ptr [0x0162ee84]
0063ad2b  MOV EAX,dword ptr [EDX + 0xf0]
0063ad31  CALL EAX
0063ad33  CMP dword ptr [EBP + 0xfffffbdc],EAX
0063ad39  JZ 0x0063ad9d
0063ad3b  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063ad41  MOV EDX,dword ptr [ECX]
0063ad43  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063ad49  MOV EAX,dword ptr [EDX + 0x8]
0063ad4c  CALL EAX
0063ad4e  PUSH 0x1
0063ad50  MOV ECX,dword ptr [EBP + 0xfffffbdc]
0063ad56  PUSH ECX
0063ad57  MOV EDX,dword ptr [EBP + 0xfffffbe4]
0063ad5d  PUSH EDX
0063ad5e  CALL dword ptr [0x006b230c]
0063ad64  ADD ESP,0xc
0063ad67  MOV EAX,[0x0162ee84]
0063ad6c  MOV EDX,dword ptr [EAX]
0063ad6e  MOV ECX,dword ptr [0x0162ee84]
0063ad74  MOV EAX,dword ptr [EDX + 0xf0]
0063ad7a  CALL EAX
0063ad7c  CMP dword ptr [EBP + 0xfffffbdc],EAX
0063ad82  JZ 0x0063ad9b
0063ad84  PUSH 0xef
0063ad89  PUSH 0x6db788
0063ad8e  PUSH 0x6db73c
0063ad93  CALL 0x005e9f20
0063ad98  ADD ESP,0xc
0063ad9b  JMP 0x0063add2
0063ad9d  MOV EDX,dword ptr [EBP + 0xfffffbe4]
0063ada3  PUSH EDX
0063ada4  PUSH 0x1
0063ada6  MOV EAX,[0x0162ee84]
0063adab  MOV EDX,dword ptr [EAX]
0063adad  MOV ECX,dword ptr [0x0162ee84]
0063adb3  MOV EAX,dword ptr [EDX + 0xf0]
0063adb9  CALL EAX
0063adbb  PUSH EAX
0063adbc  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063adc2  MOV EDX,dword ptr [ECX + 0x3a4]
0063adc8  PUSH EDX
0063adc9  CALL dword ptr [0x006b225c]
0063adcf  ADD ESP,0x10
0063add2  MOV EAX,[0x0162ee84]
0063add7  MOV EDX,dword ptr [EAX]
0063add9  MOV ECX,dword ptr [0x0162ee84]
0063addf  MOV EAX,dword ptr [EDX + 0xec]
0063ade5  CALL EAX
0063ade7  XOR ECX,ECX
0063ade9  MOV EDX,0x4
0063adee  MUL EDX
0063adf0  SETO CL
0063adf3  NEG ECX
0063adf5  OR ECX,EAX
0063adf7  PUSH ECX
0063adf8  CALL 0x00686d82
0063adfd  ADD ESP,0x4
0063ae00  MOV dword ptr [EBP + 0xfffffbd0],EAX
0063ae06  MOV EAX,dword ptr [EBP + 0xfffffbb8]
0063ae0c  MOV ECX,dword ptr [EBP + 0xfffffbd0]
0063ae12  MOV dword ptr [EAX + 0x3a8],ECX
0063ae18  MOV byte ptr [EBP + 0xfffffbe3],0x0
0063ae1f  MOV dword ptr [EBP + 0xfffffbdc],0x0
0063ae29  JMP 0x0063ae3a
0063ae2b  MOV EDX,dword ptr [EBP + 0xfffffbdc]
0063ae31  ADD EDX,0x1
0063ae34  MOV dword ptr [EBP + 0xfffffbdc],EDX
0063ae3a  MOV EAX,[0x0162ee84]
0063ae3f  MOV EDX,dword ptr [EAX]
0063ae41  MOV ECX,dword ptr [0x0162ee84]
0063ae47  MOV EAX,dword ptr [EDX + 0xec]
0063ae4d  CALL EAX
0063ae4f  CMP dword ptr [EBP + 0xfffffbdc],EAX
0063ae55  JGE 0x0063af49
0063ae5b  MOV ECX,dword ptr [EBP + 0xfffffbe4]
0063ae61  PUSH ECX
0063ae62  PUSH 0x1
0063ae64  PUSH 0x4
0063ae66  LEA EDX,[EBP + 0xfffffbd8]
0063ae6c  PUSH EDX
0063ae6d  CALL dword ptr [0x006b225c]
0063ae73  ADD ESP,0x10
0063ae76  MOV EAX,dword ptr [EBP + 0xfffffbdc]
0063ae7c  PUSH EAX
0063ae7d  MOV ECX,dword ptr [0x0162ee84]
0063ae83  MOV EDX,dword ptr [ECX]
0063ae85  MOV ECX,dword ptr [0x0162ee84]
0063ae8b  MOV EAX,dword ptr [EDX + 0x108]
0063ae91  CALL EAX
0063ae93  PUSH EAX
0063ae94  CALL 0x00686d82
0063ae99  ADD ESP,0x4
0063ae9c  MOV dword ptr [EBP + 0xfffffbcc],EAX
0063aea2  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063aea8  MOV EDX,dword ptr [ECX + 0x3a8]
0063aeae  MOV EAX,dword ptr [EBP + 0xfffffbdc]
0063aeb4  MOV ECX,dword ptr [EBP + 0xfffffbcc]
0063aeba  MOV dword ptr [EDX + EAX*0x4],ECX
0063aebd  MOV EDX,dword ptr [EBP + 0xfffffbdc]
0063aec3  PUSH EDX
0063aec4  MOV EAX,[0x0162ee84]
0063aec9  MOV EDX,dword ptr [EAX]
0063aecb  MOV ECX,dword ptr [0x0162ee84]
0063aed1  MOV EAX,dword ptr [EDX + 0x108]
0063aed7  CALL EAX
0063aed9  CMP dword ptr [EBP + 0xfffffbd8],EAX
0063aedf  JZ 0x0063af15
0063aee1  MOV ECX,dword ptr [EBP + 0xfffffbdc]
0063aee7  PUSH ECX
0063aee8  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063aeee  CALL 0x0063a720
0063aef3  PUSH 0x1
0063aef5  MOV EDX,dword ptr [EBP + 0xfffffbd8]
0063aefb  PUSH EDX
0063aefc  MOV EAX,dword ptr [EBP + 0xfffffbe4]
0063af02  PUSH EAX
0063af03  CALL dword ptr [0x006b230c]
0063af09  ADD ESP,0xc
0063af0c  MOV byte ptr [EBP + 0xfffffbe3],0x1
0063af13  JMP 0x0063af44
0063af15  MOV ECX,dword ptr [EBP + 0xfffffbe4]
0063af1b  PUSH ECX
0063af1c  PUSH 0x1
0063af1e  MOV EDX,dword ptr [EBP + 0xfffffbd8]
0063af24  PUSH EDX
0063af25  MOV EAX,dword ptr [EBP + 0xfffffbb8]
0063af2b  MOV ECX,dword ptr [EAX + 0x3a8]
0063af31  MOV EDX,dword ptr [EBP + 0xfffffbdc]
0063af37  MOV EAX,dword ptr [ECX + EDX*0x4]
0063af3a  PUSH EAX
0063af3b  CALL dword ptr [0x006b225c]
0063af41  ADD ESP,0x10
0063af44  JMP 0x0063ae2b
0063af49  MOV ECX,dword ptr [EBP + 0xfffffbe4]
0063af4f  PUSH ECX
0063af50  CALL dword ptr [0x006b2258]
0063af56  ADD ESP,0x4
0063af59  MOVZX EDX,byte ptr [EBP + 0xfffffbe3]
0063af60  TEST EDX,EDX
0063af62  JZ 0x0063af6f
0063af64  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063af6a  CALL 0x0063b0a0
0063af6f  MOV EAX,[0x0162ee84]
0063af74  MOV EDX,dword ptr [EAX]
0063af76  MOV ECX,dword ptr [0x0162ee84]
0063af7c  MOV EAX,dword ptr [EDX + 0xdc]
0063af82  CALL EAX
0063af84  MOVZX ECX,AL
0063af87  TEST ECX,ECX
0063af89  JZ 0x0063b076
0063af8f  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063af95  CALL 0x0063aac0
0063af9a  MOV EDX,dword ptr [EAX]
0063af9c  MOV dword ptr [EBP + 0xfffffbc0],EDX
0063afa2  CMP dword ptr [EBP + 0xfffffbc0],0x2
0063afa9  JZ 0x0063afd3
0063afab  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063afb1  CALL 0x0063aac0
0063afb6  MOV EAX,dword ptr [EAX]
0063afb8  MOV dword ptr [EBP + 0xfffffbbc],EAX
0063afbe  CMP dword ptr [EBP + 0xfffffbbc],0x3
0063afc5  JZ 0x0063afd3
0063afc7  MOV dword ptr [EBP + 0xfffffbb4],0x0
0063afd1  JMP 0x0063afdd
0063afd3  MOV dword ptr [EBP + 0xfffffbb4],0x1
0063afdd  MOVZX ECX,byte ptr [EBP + 0xfffffbb4]
0063afe4  TEST ECX,ECX
0063afe6  JZ 0x0063b076
0063afec  MOV EDX,dword ptr [EBP + 0xfffffbb8]
0063aff2  CMP dword ptr [EDX + 0x24],0x0
0063aff6  JNZ 0x0063b061
0063aff8  PUSH 0xb04
0063affd  CALL 0x00686d82
0063b002  ADD ESP,0x4
0063b005  MOV dword ptr [EBP + 0xfffffbc4],EAX
0063b00b  MOV dword ptr [EBP + -0x4],0x0
0063b012  CMP dword ptr [EBP + 0xfffffbc4],0x0
0063b019  JZ 0x0063b035
0063b01b  MOV EAX,dword ptr [EBP + 0xfffffbb8]
0063b021  PUSH EAX
0063b022  MOV ECX,dword ptr [EBP + 0xfffffbc4]
0063b028  CALL 0x0066f8b0
0063b02d  MOV dword ptr [EBP + 0xfffffbb0],EAX
0063b033  JMP 0x0063b03f
0063b035  MOV dword ptr [EBP + 0xfffffbb0],0x0
0063b03f  MOV ECX,dword ptr [EBP + 0xfffffbb0]
0063b045  MOV dword ptr [EBP + 0xfffffbc8],ECX
0063b04b  MOV dword ptr [EBP + -0x4],0xffffffff
0063b052  MOV EDX,dword ptr [EBP + 0xfffffbb8]
0063b058  MOV EAX,dword ptr [EBP + 0xfffffbc8]
0063b05e  MOV dword ptr [EDX + 0x24],EAX
0063b061  MOV ECX,dword ptr [EBP + 0xfffffbb8]
0063b067  PUSH ECX
0063b068  MOV EDX,dword ptr [EBP + 0xfffffbb8]
0063b06e  MOV ECX,dword ptr [EDX + 0x24]
0063b071  CALL 0x0066f960
0063b076  MOV AL,0x1
0063b078  JMP 0x0063b07c
0063b07a  XOR AL,AL
0063b07c  MOV ECX,dword ptr [EBP + -0xc]
0063b07f  MOV dword ptr FS:[0x0],ECX
0063b086  POP ECX
0063b087  MOV ECX,dword ptr [EBP + -0x10]
0063b08a  XOR ECX,EBP
0063b08c  CALL 0x00686d72
0063b091  MOV ESP,EBP
0063b093  POP EBP
0063b094  RET 0x4
