; FUN_005de620  005de620
005de620  PUSH EBP
005de621  MOV EBP,ESP
005de623  PUSH -0x1
005de625  PUSH 0x6a9585
005de62a  MOV EAX,FS:[0x0]
005de630  PUSH EAX
005de631  SUB ESP,0x53c
005de637  MOV EAX,[0x00781870]
005de63c  XOR EAX,EBP
005de63e  MOV dword ptr [EBP + -0x10],EAX
005de641  PUSH EAX
005de642  LEA EAX,[EBP + -0xc]
005de645  MOV FS:[0x0],EAX
005de64b  MOV dword ptr [EBP + 0xfffffab8],ECX
005de651  LEA ECX,[EBP + 0xfffffaf4]
005de657  CALL 0x005d4cf0
005de65c  MOV dword ptr [EBP + -0x4],0x0
005de663  MOV EAX,dword ptr [EBP + 0x8]
005de666  PUSH EAX
005de667  MOV ECX,dword ptr [EBP + 0xfffffab8]
005de66d  CALL 0x006368b0
005de672  MOVZX ECX,AL
005de675  TEST ECX,ECX
005de677  JZ 0x005de768
005de67d  PUSH 0x8
005de67f  MOV EDX,dword ptr [EBP + 0x8]
005de682  PUSH EDX
005de683  MOV ECX,dword ptr [EBP + 0xfffffab8]
005de689  CALL 0x006369b0
005de68e  PUSH EAX
005de68f  CALL 0x005dcb00
005de694  ADD ESP,0x4
005de697  MOV ECX,EAX
005de699  CALL 0x0063aae0
005de69e  MOV dword ptr [EBP + 0xfffffaf0],EAX
005de6a4  MOV EAX,dword ptr [EBP + 0x8]
005de6a7  PUSH EAX
005de6a8  MOV ECX,dword ptr [EBP + 0xfffffab8]
005de6ae  CALL 0x006369b0
005de6b3  PUSH EAX
005de6b4  CALL 0x005dcb00
005de6b9  ADD ESP,0x4
005de6bc  MOV ECX,EAX
005de6be  CALL 0x005d5a50
005de6c3  MOV ECX,dword ptr [EBP + 0xc]
005de6c6  SUB EAX,dword ptr [ECX]
005de6c8  MOV dword ptr [EBP + 0xfffffaec],EAX
005de6ce  PUSH 0x0
005de6d0  MOV EDX,dword ptr [EBP + 0xfffffaec]
005de6d6  PUSH EDX
005de6d7  CALL 0x0064c8a0
005de6dc  ADD ESP,0x8
005de6df  MOV dword ptr [EBP + 0xfffffad4],EAX
005de6e5  MOV dword ptr [EBP + 0xfffffad8],EDX
005de6eb  MOV EAX,dword ptr [EBP + 0xfffffad8]
005de6f1  PUSH EAX
005de6f2  MOV ECX,dword ptr [EBP + 0xfffffad4]
005de6f8  PUSH ECX
005de6f9  LEA EDX,[EBP + 0xfffffacc]
005de6ff  PUSH EDX
005de700  MOV ECX,dword ptr [EBP + 0xfffffaf0]
005de706  CALL 0x0064c630
005de70b  MOV ECX,dword ptr [EAX]
005de70d  MOV EDX,dword ptr [EAX + 0x4]
005de710  MOV EAX,dword ptr [EBP + 0xfffffaf0]
005de716  MOV dword ptr [EAX],ECX
005de718  MOV dword ptr [EAX + 0x4],EDX
005de71b  MOV ECX,dword ptr [EBP + 0xc]
005de71e  MOV EDX,dword ptr [ECX + 0x4]
005de721  PUSH EDX
005de722  MOV EAX,dword ptr [ECX]
005de724  PUSH EAX
005de725  MOV ECX,dword ptr [EBP + 0x8]
005de728  PUSH ECX
005de729  MOV ECX,dword ptr [EBP + 0xfffffab8]
005de72f  CALL 0x006369b0
005de734  PUSH EAX
005de735  CALL 0x005dcb00
005de73a  ADD ESP,0x4
005de73d  MOV ECX,EAX
005de73f  CALL 0x005d5af0
005de744  MOV EDX,dword ptr [EBP + 0x8]
005de747  PUSH EDX
005de748  MOV ECX,dword ptr [EBP + 0xfffffab8]
005de74e  CALL 0x006369b0
005de753  PUSH EAX
005de754  CALL 0x005dcb00
005de759  ADD ESP,0x4
005de75c  MOV ECX,EAX
005de75e  CALL 0x0063b0a0
005de763  JMP 0x005de831
005de768  LEA EAX,[EBP + 0xfffffadc]
005de76e  PUSH EAX
005de76f  MOV ECX,dword ptr [EBP + 0x8]
005de772  PUSH ECX
005de773  MOV ECX,dword ptr [EBP + 0xfffffab8]
005de779  CALL 0x00635f30
005de77e  LEA EDX,[EBP + 0xfffffadc]
005de784  PUSH EDX
005de785  LEA ECX,[EBP + 0xfffffaf4]
005de78b  CALL 0x0063ab10
005de790  MOVZX EAX,AL
005de793  TEST EAX,EAX
005de795  JZ 0x005de831
005de79b  PUSH 0x8
005de79d  LEA ECX,[EBP + 0xfffffaf4]
005de7a3  CALL 0x0063aae0
005de7a8  MOV dword ptr [EBP + 0xfffffaf0],EAX
005de7ae  LEA ECX,[EBP + 0xfffffaf4]
005de7b4  CALL 0x005d5a50
005de7b9  MOV ECX,dword ptr [EBP + 0xc]
005de7bc  SUB EAX,dword ptr [ECX]
005de7be  MOV dword ptr [EBP + 0xfffffaec],EAX
005de7c4  PUSH 0x0
005de7c6  MOV EDX,dword ptr [EBP + 0xfffffaec]
005de7cc  PUSH EDX
005de7cd  CALL 0x0064c8a0
005de7d2  ADD ESP,0x8
005de7d5  MOV dword ptr [EBP + 0xfffffac4],EAX
005de7db  MOV dword ptr [EBP + 0xfffffac8],EDX
005de7e1  MOV EAX,dword ptr [EBP + 0xfffffac8]
005de7e7  PUSH EAX
005de7e8  MOV ECX,dword ptr [EBP + 0xfffffac4]
005de7ee  PUSH ECX
005de7ef  LEA EDX,[EBP + 0xfffffabc]
005de7f5  PUSH EDX
005de7f6  MOV ECX,dword ptr [EBP + 0xfffffaf0]
005de7fc  CALL 0x0064c630
005de801  MOV ECX,dword ptr [EAX]
005de803  MOV EDX,dword ptr [EAX + 0x4]
005de806  MOV EAX,dword ptr [EBP + 0xfffffaf0]
005de80c  MOV dword ptr [EAX],ECX
005de80e  MOV dword ptr [EAX + 0x4],EDX
005de811  MOV ECX,dword ptr [EBP + 0xc]
005de814  MOV EDX,dword ptr [ECX + 0x4]
005de817  PUSH EDX
005de818  MOV EAX,dword ptr [ECX]
005de81a  PUSH EAX
005de81b  LEA ECX,[EBP + 0xfffffaf4]
005de821  CALL 0x005d5af0
005de826  LEA ECX,[EBP + 0xfffffaf4]
005de82c  CALL 0x0063b0a0
005de831  MOV dword ptr [EBP + -0x4],0xffffffff
005de838  LEA ECX,[EBP + 0xfffffaf4]
005de83e  CALL 0x005d4f50
005de843  MOV ECX,dword ptr [EBP + -0xc]
005de846  MOV dword ptr FS:[0x0],ECX
005de84d  POP ECX
005de84e  MOV ECX,dword ptr [EBP + -0x10]
005de851  XOR ECX,EBP
005de853  CALL 0x00686d72
005de858  MOV ESP,EBP
005de85a  POP EBP
005de85b  RET 0x8
