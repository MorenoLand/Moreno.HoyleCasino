; FUN_005a1650  005a1650
005a1650  PUSH EBP
005a1651  MOV EBP,ESP
005a1653  SUB ESP,0x18
005a1656  MOV dword ptr [EBP + -0x18],ECX
005a1659  PUSH 0x1
005a165b  MOV ECX,dword ptr [EBP + 0x8]
005a165e  CALL 0x0063aae0
005a1663  MOV dword ptr [EBP + -0x4],EAX
005a1666  MOV EAX,dword ptr [EBP + -0x4]
005a1669  MOV ECX,dword ptr [EAX + 0x4]
005a166c  MOV EDX,dword ptr [EBP + -0x4]
005a166f  ADD ECX,dword ptr [EDX + 0xc]
005a1672  MOV EAX,dword ptr [EBP + 0xc]
005a1675  ADD ECX,dword ptr [EAX]
005a1677  MOV EDX,dword ptr [EBP + 0xc]
005a167a  MOV dword ptr [EDX],ECX
005a167c  MOV EAX,dword ptr [EBP + 0xc]
005a167f  MOV ECX,dword ptr [EAX + 0x4]
005a1682  MOV EDX,dword ptr [EBP + -0x4]
005a1685  ADD ECX,dword ptr [EDX + 0x8]
005a1688  MOV EAX,dword ptr [EBP + 0xc]
005a168b  MOV dword ptr [EAX + 0x4],ECX
005a168e  MOV ECX,dword ptr [EBP + 0x10]
005a1691  MOV EDX,dword ptr [ECX]
005a1693  MOV EAX,dword ptr [EBP + -0x4]
005a1696  ADD EDX,dword ptr [EAX + 0x4]
005a1699  MOV ECX,dword ptr [EBP + 0x10]
005a169c  MOV dword ptr [ECX],EDX
005a169e  MOV EDX,dword ptr [EBP + 0x10]
005a16a1  MOV EAX,dword ptr [EDX + 0x4]
005a16a4  MOV ECX,dword ptr [EBP + -0x4]
005a16a7  ADD EAX,dword ptr [ECX + 0x8]
005a16aa  MOV EDX,dword ptr [EBP + 0x10]
005a16ad  MOV dword ptr [EDX + 0x4],EAX
005a16b0  MOV EAX,dword ptr [EBP + 0x14]
005a16b3  MOV ECX,dword ptr [EAX]
005a16b5  MOV EDX,dword ptr [EBP + -0x4]
005a16b8  ADD ECX,dword ptr [EDX + 0xc]
005a16bb  MOV EAX,dword ptr [EBP + 0x14]
005a16be  MOV dword ptr [EAX],ECX
005a16c0  MOV ECX,dword ptr [EBP + 0x14]
005a16c3  MOV EDX,dword ptr [ECX + 0x4]
005a16c6  MOV EAX,dword ptr [EBP + -0x4]
005a16c9  ADD EDX,dword ptr [EAX + 0x10]
005a16cc  MOV ECX,dword ptr [EBP + 0x14]
005a16cf  MOV dword ptr [ECX + 0x4],EDX
005a16d2  PUSH -0x1
005a16d4  MOV EDX,dword ptr [0x007947e0]
005a16da  MOV EAX,dword ptr [EDX]
005a16dc  MOV ECX,dword ptr [0x007947e0]
005a16e2  MOV EDX,dword ptr [EAX + 0x33c]
005a16e8  CALL EDX
005a16ea  MOVZX EAX,AL
005a16ed  TEST EAX,EAX
005a16ef  JZ 0x005a176f
005a16f1  MOV ECX,dword ptr [0x0162ee84]
005a16f7  CALL 0x005f3bf0
005a16fc  CMP EAX,0x1
005a16ff  JNZ 0x005a176f
005a1701  LEA ECX,[EBP + -0xc]
005a1704  PUSH ECX
005a1705  LEA EDX,[EBP + -0x14]
005a1708  PUSH EDX
005a1709  MOV EAX,dword ptr [EBP + 0x8]
005a170c  PUSH EAX
005a170d  MOV ECX,dword ptr [0x007947e0]
005a1713  CALL 0x005e0c40
005a1718  MOV ECX,dword ptr [EBP + -0x14]
005a171b  ADD ECX,dword ptr [EBP + -0xc]
005a171e  MOV EDX,dword ptr [EBP + 0xc]
005a1721  ADD ECX,dword ptr [EDX]
005a1723  MOV EAX,dword ptr [EBP + 0xc]
005a1726  MOV dword ptr [EAX],ECX
005a1728  MOV ECX,dword ptr [EBP + 0xc]
005a172b  MOV EDX,dword ptr [ECX + 0x4]
005a172e  ADD EDX,dword ptr [EBP + -0x10]
005a1731  MOV EAX,dword ptr [EBP + 0xc]
005a1734  MOV dword ptr [EAX + 0x4],EDX
005a1737  MOV ECX,dword ptr [EBP + 0x10]
005a173a  MOV EDX,dword ptr [ECX]
005a173c  ADD EDX,dword ptr [EBP + -0x14]
005a173f  MOV EAX,dword ptr [EBP + 0x10]
005a1742  MOV dword ptr [EAX],EDX
005a1744  MOV ECX,dword ptr [EBP + 0x10]
005a1747  MOV EDX,dword ptr [ECX + 0x4]
005a174a  ADD EDX,dword ptr [EBP + -0x10]
005a174d  MOV EAX,dword ptr [EBP + 0x10]
005a1750  MOV dword ptr [EAX + 0x4],EDX
005a1753  MOV ECX,dword ptr [EBP + 0x14]
005a1756  MOV EDX,dword ptr [ECX]
005a1758  ADD EDX,dword ptr [EBP + -0xc]
005a175b  MOV EAX,dword ptr [EBP + 0x14]
005a175e  MOV dword ptr [EAX],EDX
005a1760  MOV ECX,dword ptr [EBP + 0x14]
005a1763  MOV EDX,dword ptr [ECX + 0x4]
005a1766  ADD EDX,dword ptr [EBP + -0x8]
005a1769  MOV EAX,dword ptr [EBP + 0x14]
005a176c  MOV dword ptr [EAX + 0x4],EDX
005a176f  MOV ESP,EBP
005a1771  POP EBP
005a1772  RET 0x10
