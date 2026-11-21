; FUN_005f6820  005f6820
005f6820  PUSH EBP
005f6821  MOV EBP,ESP
005f6823  SUB ESP,0x54
005f6826  MOV dword ptr [EBP + -0x54],ECX
005f6829  MOV ECX,dword ptr [EBP + -0x54]
005f682c  CALL 0x005f54c0
005f6831  MOVZX EAX,AL
005f6834  TEST EAX,EAX
005f6836  JZ 0x005f683d
005f6838  JMP 0x005f6acf
005f683d  MOV ECX,dword ptr [EBP + -0x54]
005f6840  MOV DL,byte ptr [ECX + 0x58]
005f6843  MOV byte ptr [EBP + -0x29],DL
005f6846  MOVZX EAX,byte ptr [EBP + -0x29]
005f684a  TEST EAX,EAX
005f684c  JZ 0x005f6898
005f684e  MOV ECX,dword ptr [EBP + -0x54]
005f6851  MOV EDX,dword ptr [ECX + 0x1c]
005f6854  ADD EDX,0x1
005f6857  MOV dword ptr [EBP + -0x3c],EDX
005f685a  MOV EAX,dword ptr [EBP + -0x54]
005f685d  MOV ECX,dword ptr [EAX + 0x18]
005f6860  ADD ECX,0x1
005f6863  MOV dword ptr [EBP + -0x38],ECX
005f6866  MOV EDX,dword ptr [EBP + -0x54]
005f6869  MOV EAX,dword ptr [EDX + 0x14]
005f686c  SUB EAX,0x1
005f686f  MOV dword ptr [EBP + -0x34],EAX
005f6872  MOV ECX,dword ptr [EBP + -0x54]
005f6875  MOV EDX,dword ptr [ECX + 0x10]
005f6878  SUB EDX,0x1
005f687b  MOV dword ptr [EBP + -0x30],EDX
005f687e  MOV EAX,dword ptr [EBP + -0x30]
005f6881  MOV dword ptr [EBP + -0x28],EAX
005f6884  MOV ECX,dword ptr [EBP + -0x34]
005f6887  MOV dword ptr [EBP + -0x24],ECX
005f688a  MOV EDX,dword ptr [EBP + -0x38]
005f688d  MOV dword ptr [EBP + -0x20],EDX
005f6890  MOV EAX,dword ptr [EBP + -0x3c]
005f6893  MOV dword ptr [EBP + -0x1c],EAX
005f6896  JMP 0x005f68d4
005f6898  MOV ECX,dword ptr [EBP + -0x54]
005f689b  MOV EDX,dword ptr [ECX + 0x1c]
005f689e  MOV dword ptr [EBP + -0x4c],EDX
005f68a1  MOV EAX,dword ptr [EBP + -0x54]
005f68a4  MOV ECX,dword ptr [EAX + 0x18]
005f68a7  MOV dword ptr [EBP + -0x48],ECX
005f68aa  MOV EDX,dword ptr [EBP + -0x54]
005f68ad  MOV EAX,dword ptr [EDX + 0x14]
005f68b0  MOV dword ptr [EBP + -0x44],EAX
005f68b3  MOV ECX,dword ptr [EBP + -0x54]
005f68b6  MOV EDX,dword ptr [ECX + 0x10]
005f68b9  MOV dword ptr [EBP + -0x40],EDX
005f68bc  MOV EAX,dword ptr [EBP + -0x40]
005f68bf  MOV dword ptr [EBP + -0x28],EAX
005f68c2  MOV ECX,dword ptr [EBP + -0x44]
005f68c5  MOV dword ptr [EBP + -0x24],ECX
005f68c8  MOV EDX,dword ptr [EBP + -0x48]
005f68cb  MOV dword ptr [EBP + -0x20],EDX
005f68ce  MOV EAX,dword ptr [EBP + -0x4c]
005f68d1  MOV dword ptr [EBP + -0x1c],EAX
005f68d4  MOV ECX,dword ptr [EBP + 0x8]
005f68d7  MOV EDX,dword ptr [ECX]
005f68d9  MOV dword ptr [EBP + -0x18],EDX
005f68dc  MOV EAX,dword ptr [ECX + 0x4]
005f68df  MOV dword ptr [EBP + -0x14],EAX
005f68e2  MOV EDX,dword ptr [ECX + 0x8]
005f68e5  MOV dword ptr [EBP + -0x10],EDX
005f68e8  MOV EAX,dword ptr [ECX + 0xc]
005f68eb  MOV dword ptr [EBP + -0xc],EAX
005f68ee  MOV ECX,dword ptr [EBP + -0x10]
005f68f1  ADD ECX,0x1
005f68f4  MOV dword ptr [EBP + -0x10],ECX
005f68f7  MOV EDX,dword ptr [EBP + -0xc]
005f68fa  ADD EDX,0x1
005f68fd  MOV dword ptr [EBP + -0xc],EDX
005f6900  LEA EAX,[EBP + -0x18]
005f6903  PUSH EAX
005f6904  LEA ECX,[EBP + -0x28]
005f6907  PUSH ECX
005f6908  LEA EDX,[EBP + -0x28]
005f690b  PUSH EDX
005f690c  CALL 0x005ec3a0
005f6911  ADD ESP,0xc
005f6914  MOV EAX,dword ptr [EBP + -0x54]
005f6917  MOV CL,byte ptr [EAX + 0x58]
005f691a  MOV byte ptr [EBP + -0x4d],CL
005f691d  MOVZX EDX,byte ptr [EBP + -0x4d]
005f6921  TEST EDX,EDX
005f6923  JZ 0x005f693d
005f6925  MOV EAX,dword ptr [EBP + -0x54]
005f6928  MOVZX ECX,byte ptr [EAX + 0x49]
005f692c  TEST ECX,ECX
005f692e  JZ 0x005f6938
005f6930  MOV ECX,dword ptr [EBP + -0x54]
005f6933  CALL 0x005f6640
005f6938  JMP 0x005f6acf
005f693d  MOV EDX,dword ptr [EBP + -0x54]
005f6940  MOV AL,byte ptr [EDX + 0x4a]
005f6943  MOV byte ptr [EBP + -0x8],AL
005f6946  MOV ECX,dword ptr [EBP + -0x54]
005f6949  MOV DL,byte ptr [ECX + 0x4b]
005f694c  MOV byte ptr [EBP + -0x7],DL
005f694f  MOV EAX,dword ptr [EBP + -0x54]
005f6952  MOV CL,byte ptr [EAX + 0x4c]
005f6955  MOV byte ptr [EBP + -0x6],CL
005f6958  MOV ECX,dword ptr [EBP + -0x54]
005f695b  CALL 0x005f63f0
005f6960  MOV byte ptr [EBP + -0x5],AL
005f6963  MOV EDX,dword ptr [EBP + -0x54]
005f6966  MOVZX EAX,byte ptr [EDX + 0x48]
005f696a  TEST EAX,EAX
005f696c  JZ 0x005f69b0
005f696e  MOV ECX,dword ptr [EBP + -0x24]
005f6971  MOV dword ptr [EBP + -0x4],ECX
005f6974  JMP 0x005f697f
005f6976  MOV EDX,dword ptr [EBP + -0x4]
005f6979  ADD EDX,0x1
005f697c  MOV dword ptr [EBP + -0x4],EDX
005f697f  MOV EAX,dword ptr [EBP + -0x4]
005f6982  CMP EAX,dword ptr [EBP + -0x1c]
005f6985  JGE 0x005f69b0
005f6987  MOV ECX,dword ptr [EBP + -0x54]
005f698a  CALL 0x005f6620
005f698f  PUSH EAX
005f6990  MOV ECX,dword ptr [EBP + -0x8]
005f6993  PUSH ECX
005f6994  MOV EDX,dword ptr [EBP + -0x4]
005f6997  PUSH EDX
005f6998  MOV EAX,dword ptr [EBP + -0x20]
005f699b  SUB EAX,0x1
005f699e  PUSH EAX
005f699f  MOV ECX,dword ptr [EBP + -0x28]
005f69a2  PUSH ECX
005f69a3  MOV EDX,dword ptr [EBP + -0x54]
005f69a6  MOV ECX,dword ptr [EDX + 0x4]
005f69a9  CALL 0x005f9380
005f69ae  JMP 0x005f6976
005f69b0  MOV EAX,dword ptr [EBP + -0x54]
005f69b3  MOV CL,byte ptr [EAX + 0x4d]
005f69b6  MOV byte ptr [EBP + -0x8],CL
005f69b9  MOV EDX,dword ptr [EBP + -0x54]
005f69bc  MOV AL,byte ptr [EDX + 0x4e]
005f69bf  MOV byte ptr [EBP + -0x7],AL
005f69c2  MOV ECX,dword ptr [EBP + -0x54]
005f69c5  MOV DL,byte ptr [ECX + 0x4f]
005f69c8  MOV byte ptr [EBP + -0x6],DL
005f69cb  MOV ECX,dword ptr [EBP + -0x54]
005f69ce  CALL 0x005f63f0
005f69d3  MOV byte ptr [EBP + -0x5],AL
005f69d6  MOV EAX,dword ptr [EBP + -0x54]
005f69d9  MOVZX ECX,byte ptr [EAX + 0x49]
005f69dd  TEST ECX,ECX
005f69df  JZ 0x005f6acf
005f69e5  MOV EDX,dword ptr [EBP + -0x54]
005f69e8  MOV EAX,dword ptr [EBP + -0x24]
005f69eb  CMP EAX,dword ptr [EDX + 0x14]
005f69ee  JNZ 0x005f6a1a
005f69f0  MOV ECX,dword ptr [EBP + -0x54]
005f69f3  CALL 0x005f6620
005f69f8  PUSH EAX
005f69f9  MOV ECX,dword ptr [EBP + -0x8]
005f69fc  PUSH ECX
005f69fd  MOV EDX,dword ptr [EBP + -0x54]
005f6a00  MOV EAX,dword ptr [EDX + 0x14]
005f6a03  PUSH EAX
005f6a04  MOV ECX,dword ptr [EBP + -0x20]
005f6a07  SUB ECX,0x1
005f6a0a  PUSH ECX
005f6a0b  MOV EDX,dword ptr [EBP + -0x28]
005f6a0e  PUSH EDX
005f6a0f  MOV EAX,dword ptr [EBP + -0x54]
005f6a12  MOV ECX,dword ptr [EAX + 0x4]
005f6a15  CALL 0x005f9380
005f6a1a  MOV ECX,dword ptr [EBP + -0x1c]
005f6a1d  SUB ECX,0x1
005f6a20  MOV EDX,dword ptr [EBP + -0x54]
005f6a23  MOV EAX,dword ptr [EDX + 0x1c]
005f6a26  SUB EAX,0x1
005f6a29  CMP ECX,EAX
005f6a2b  JNZ 0x005f6a5a
005f6a2d  MOV ECX,dword ptr [EBP + -0x54]
005f6a30  CALL 0x005f6620
005f6a35  PUSH EAX
005f6a36  MOV ECX,dword ptr [EBP + -0x8]
005f6a39  PUSH ECX
005f6a3a  MOV EDX,dword ptr [EBP + -0x54]
005f6a3d  MOV EAX,dword ptr [EDX + 0x1c]
005f6a40  SUB EAX,0x1
005f6a43  PUSH EAX
005f6a44  MOV ECX,dword ptr [EBP + -0x20]
005f6a47  SUB ECX,0x1
005f6a4a  PUSH ECX
005f6a4b  MOV EDX,dword ptr [EBP + -0x28]
005f6a4e  PUSH EDX
005f6a4f  MOV EAX,dword ptr [EBP + -0x54]
005f6a52  MOV ECX,dword ptr [EAX + 0x4]
005f6a55  CALL 0x005f9380
005f6a5a  MOV ECX,dword ptr [EBP + -0x54]
005f6a5d  MOV EDX,dword ptr [EBP + -0x28]
005f6a60  CMP EDX,dword ptr [ECX + 0x10]
005f6a63  JNZ 0x005f6a8f
005f6a65  MOV ECX,dword ptr [EBP + -0x54]
005f6a68  CALL 0x005f6620
005f6a6d  PUSH EAX
005f6a6e  MOV EAX,dword ptr [EBP + -0x8]
005f6a71  PUSH EAX
005f6a72  MOV ECX,dword ptr [EBP + -0x1c]
005f6a75  SUB ECX,0x1
005f6a78  PUSH ECX
005f6a79  MOV EDX,dword ptr [EBP + -0x24]
005f6a7c  PUSH EDX
005f6a7d  MOV EAX,dword ptr [EBP + -0x54]
005f6a80  MOV ECX,dword ptr [EAX + 0x10]
005f6a83  PUSH ECX
005f6a84  MOV EDX,dword ptr [EBP + -0x54]
005f6a87  MOV ECX,dword ptr [EDX + 0x4]
005f6a8a  CALL 0x005f93e0
005f6a8f  MOV EAX,dword ptr [EBP + -0x20]
005f6a92  SUB EAX,0x1
005f6a95  MOV ECX,dword ptr [EBP + -0x54]
005f6a98  MOV EDX,dword ptr [ECX + 0x18]
005f6a9b  SUB EDX,0x1
005f6a9e  CMP EAX,EDX
005f6aa0  JNZ 0x005f6acf
005f6aa2  MOV ECX,dword ptr [EBP + -0x54]
005f6aa5  CALL 0x005f6620
005f6aaa  PUSH EAX
005f6aab  MOV EAX,dword ptr [EBP + -0x8]
005f6aae  PUSH EAX
005f6aaf  MOV ECX,dword ptr [EBP + -0x1c]
005f6ab2  SUB ECX,0x1
005f6ab5  PUSH ECX
005f6ab6  MOV EDX,dword ptr [EBP + -0x24]
005f6ab9  PUSH EDX
005f6aba  MOV EAX,dword ptr [EBP + -0x54]
005f6abd  MOV ECX,dword ptr [EAX + 0x18]
005f6ac0  SUB ECX,0x1
005f6ac3  PUSH ECX
005f6ac4  MOV EDX,dword ptr [EBP + -0x54]
005f6ac7  MOV ECX,dword ptr [EDX + 0x4]
005f6aca  CALL 0x005f93e0
005f6acf  MOV ESP,EBP
005f6ad1  POP EBP
005f6ad2  RET 0x4
