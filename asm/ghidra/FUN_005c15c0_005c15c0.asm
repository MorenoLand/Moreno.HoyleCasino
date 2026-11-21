; FUN_005c15c0  005c15c0
005c15c0  PUSH EBP
005c15c1  MOV EBP,ESP
005c15c3  PUSH -0x1
005c15c5  PUSH 0x6a852e
005c15ca  MOV EAX,FS:[0x0]
005c15d0  PUSH EAX
005c15d1  SUB ESP,0x48
005c15d4  MOV EAX,[0x00781870]
005c15d9  XOR EAX,EBP
005c15db  PUSH EAX
005c15dc  LEA EAX,[EBP + -0xc]
005c15df  MOV FS:[0x0],EAX
005c15e5  MOV dword ptr [EBP + -0x4c],ECX
005c15e8  MOV byte ptr [EBP + -0x11],0x1
005c15ec  MOV EAX,dword ptr [EBP + -0x4c]
005c15ef  MOV EDX,dword ptr [EAX]
005c15f1  MOV ECX,dword ptr [EBP + -0x4c]
005c15f4  MOV EAX,dword ptr [EDX + 0x28]
005c15f7  CALL EAX
005c15f9  MOVZX ECX,AL
005c15fc  TEST ECX,ECX
005c15fe  JNZ 0x005c162e
005c1600  MOV EDX,dword ptr [EBP + -0x4c]
005c1603  CMP dword ptr [EDX + 0x10],0x0
005c1607  JZ 0x005c162e
005c1609  MOV EAX,dword ptr [EBP + 0x8]
005c160c  PUSH EAX
005c160d  MOV ECX,dword ptr [EBP + -0x4c]
005c1610  MOV EDX,dword ptr [ECX + 0x10]
005c1613  MOV EAX,dword ptr [EBP + -0x4c]
005c1616  MOV ECX,dword ptr [EAX + 0x10]
005c1619  MOV EDX,dword ptr [EDX]
005c161b  MOV EAX,dword ptr [EDX + 0xc]
005c161e  CALL EAX
005c1620  MOVZX ECX,AL
005c1623  TEST ECX,ECX
005c1625  JZ 0x005c162e
005c1627  MOV AL,0x1
005c1629  JMP 0x005c1a31
005c162e  MOV EDX,dword ptr [EBP + -0x4c]
005c1631  MOV EAX,dword ptr [EDX]
005c1633  MOV ECX,dword ptr [EBP + -0x4c]
005c1636  MOV EDX,dword ptr [EAX + 0x28]
005c1639  CALL EDX
005c163b  MOVZX EAX,AL
005c163e  TEST EAX,EAX
005c1640  JNZ 0x005c1672
005c1642  MOV ECX,dword ptr [EBP + -0x4c]
005c1645  CMP dword ptr [ECX + 0x14],0x0
005c1649  JZ 0x005c1672
005c164b  MOV EDX,dword ptr [EBP + 0x8]
005c164e  PUSH EDX
005c164f  MOV EAX,dword ptr [EBP + -0x4c]
005c1652  MOV ECX,dword ptr [EAX + 0x14]
005c1655  MOV EDX,dword ptr [EBP + -0x4c]
005c1658  MOV EAX,dword ptr [EDX + 0x14]
005c165b  MOV EDX,dword ptr [ECX]
005c165d  MOV ECX,EAX
005c165f  MOV EAX,dword ptr [EDX + 0x8]
005c1662  CALL EAX
005c1664  MOVZX ECX,AL
005c1667  TEST ECX,ECX
005c1669  JZ 0x005c1672
005c166b  MOV AL,0x1
005c166d  JMP 0x005c1a31
005c1672  MOV EDX,dword ptr [EBP + 0x8]
005c1675  MOV dword ptr [EBP + -0x50],EDX
005c1678  MOV EAX,dword ptr [EBP + -0x50]
005c167b  SUB EAX,0x54
005c167e  MOV dword ptr [EBP + -0x50],EAX
005c1681  CMP dword ptr [EBP + -0x50],0xe
005c1685  JA 0x005c19a6
005c168b  MOV ECX,dword ptr [EBP + -0x50]
005c168e  MOVZX EDX,byte ptr [ECX + 0x5c1a64]
005c1695  JMP dword ptr [EDX*0x4 + 0x5c1a44]
005c169c  PUSH 0x6d1d70
005c16a1  CALL 0x0062fde0
005c16a6  ADD ESP,0x4
005c16a9  MOV EAX,dword ptr [EBP + -0x4c]
005c16ac  MOV ECX,dword ptr [EAX + 0x4]
005c16af  MOV EDX,dword ptr [ECX + 0x8]
005c16b2  MOV dword ptr [EBP + -0x2c],EDX
005c16b5  MOV EAX,dword ptr [EBP + -0x4c]
005c16b8  MOV ECX,dword ptr [EAX + 0x4]
005c16bb  MOV dword ptr [EBP + -0x34],ECX
005c16be  MOV ECX,dword ptr [EBP + -0x34]
005c16c1  CALL 0x005c9140
005c16c6  MOV EDX,dword ptr [EBP + -0x34]
005c16c9  MOV EAX,dword ptr [EDX + 0x4]
005c16cc  MOV dword ptr [EBP + -0x30],EAX
005c16cf  MOV ECX,dword ptr [EBP + -0x2c]
005c16d2  CMP ECX,dword ptr [EBP + -0x30]
005c16d5  JLE 0x005c1713
005c16d7  MOV EDX,dword ptr [EBP + -0x4c]
005c16da  MOV EAX,dword ptr [EDX + 0x4]
005c16dd  MOV ECX,dword ptr [EAX + 0x8]
005c16e0  MOV dword ptr [EBP + -0x38],ECX
005c16e3  MOV EDX,dword ptr [EBP + -0x4c]
005c16e6  MOV EAX,dword ptr [EDX + 0x4]
005c16e9  MOV dword ptr [EBP + -0x40],EAX
005c16ec  MOV ECX,dword ptr [EBP + -0x40]
005c16ef  CALL 0x005c9140
005c16f4  MOV ECX,dword ptr [EBP + -0x40]
005c16f7  MOV EDX,dword ptr [ECX + 0x4]
005c16fa  MOV dword ptr [EBP + -0x3c],EDX
005c16fd  MOV EAX,dword ptr [EBP + -0x38]
005c1700  SUB EAX,dword ptr [EBP + -0x3c]
005c1703  PUSH EAX
005c1704  LEA ECX,[EBP + -0x20]
005c1707  PUSH ECX
005c1708  MOV EDX,dword ptr [EBP + -0x4c]
005c170b  MOV ECX,dword ptr [EDX + 0x4]
005c170e  CALL 0x005d0db0
005c1713  MOV byte ptr [EBP + -0x11],0x0
005c1717  JMP 0x005c19aa
005c171c  MOV EAX,dword ptr [EBP + -0x4c]
005c171f  MOV EDX,dword ptr [EAX]
005c1721  MOV ECX,dword ptr [EBP + -0x4c]
005c1724  MOV EAX,dword ptr [EDX + 0x28]
005c1727  CALL EAX
005c1729  MOVZX ECX,AL
005c172c  TEST ECX,ECX
005c172e  JZ 0x005c1744
005c1730  MOV EDX,dword ptr [EBP + -0x4c]
005c1733  MOV EAX,dword ptr [EDX]
005c1735  MOV ECX,dword ptr [EBP + -0x4c]
005c1738  MOV EDX,dword ptr [EAX + 0x24]
005c173b  CALL EDX
005c173d  MOVZX EAX,AL
005c1740  TEST EAX,EAX
005c1742  JZ 0x005c1749
005c1744  JMP 0x005c19aa
005c1749  PUSH 0x1
005c174b  MOV ECX,dword ptr [EBP + -0x4c]
005c174e  MOV ECX,dword ptr [ECX + 0x4]
005c1751  CALL 0x005c8dc0
005c1756  MOV EDX,dword ptr [EBP + -0x4c]
005c1759  MOV EAX,dword ptr [EDX]
005c175b  MOV ECX,dword ptr [EBP + -0x4c]
005c175e  MOV EDX,dword ptr [EAX + 0x14]
005c1761  CALL EDX
005c1763  JMP 0x005c19aa
005c1768  MOV EAX,dword ptr [EBP + -0x4c]
005c176b  MOV EDX,dword ptr [EAX]
005c176d  MOV ECX,dword ptr [EBP + -0x4c]
005c1770  MOV EAX,dword ptr [EDX + 0x28]
005c1773  CALL EAX
005c1775  MOVZX ECX,AL
005c1778  TEST ECX,ECX
005c177a  JZ 0x005c1790
005c177c  MOV EDX,dword ptr [EBP + -0x4c]
005c177f  MOV EAX,dword ptr [EDX]
005c1781  MOV ECX,dword ptr [EBP + -0x4c]
005c1784  MOV EDX,dword ptr [EAX + 0x24]
005c1787  CALL EDX
005c1789  MOVZX EAX,AL
005c178c  TEST EAX,EAX
005c178e  JZ 0x005c1795
005c1790  JMP 0x005c19aa
005c1795  PUSH 0x1
005c1797  MOV ECX,dword ptr [EBP + -0x4c]
005c179a  MOV ECX,dword ptr [ECX + 0x4]
005c179d  CALL 0x005c8f00
005c17a2  MOV EDX,dword ptr [EBP + -0x4c]
005c17a5  MOV EAX,dword ptr [EDX]
005c17a7  MOV ECX,dword ptr [EBP + -0x4c]
005c17aa  MOV EDX,dword ptr [EAX + 0x10]
005c17ad  CALL EDX
005c17af  MOV EAX,dword ptr [EBP + -0x4c]
005c17b2  MOV EDX,dword ptr [EAX]
005c17b4  MOV ECX,dword ptr [EBP + -0x4c]
005c17b7  MOV EAX,dword ptr [EDX + 0x14]
005c17ba  CALL EAX
005c17bc  JMP 0x005c19aa
005c17c1  MOV ECX,dword ptr [EBP + -0x4c]
005c17c4  MOV EDX,dword ptr [ECX]
005c17c6  MOV ECX,dword ptr [EBP + -0x4c]
005c17c9  MOV EAX,dword ptr [EDX + 0x28]
005c17cc  CALL EAX
005c17ce  MOVZX ECX,AL
005c17d1  TEST ECX,ECX
005c17d3  JZ 0x005c17e9
005c17d5  MOV EDX,dword ptr [EBP + -0x4c]
005c17d8  MOV EAX,dword ptr [EDX]
005c17da  MOV ECX,dword ptr [EBP + -0x4c]
005c17dd  MOV EDX,dword ptr [EAX + 0x24]
005c17e0  CALL EDX
005c17e2  MOVZX EAX,AL
005c17e5  TEST EAX,EAX
005c17e7  JZ 0x005c17ee
005c17e9  JMP 0x005c19aa
005c17ee  MOV dword ptr [EBP + -0x18],0x1
005c17f5  JMP 0x005c1800
005c17f7  MOV ECX,dword ptr [EBP + -0x18]
005c17fa  ADD ECX,0x1
005c17fd  MOV dword ptr [EBP + -0x18],ECX
005c1800  MOV EDX,dword ptr [EBP + -0x4c]
005c1803  MOV EAX,dword ptr [EDX + 0x4]
005c1806  MOV ECX,dword ptr [EAX + 0x10]
005c1809  MOV EDX,dword ptr [ECX + 0x8]
005c180c  MOV dword ptr [EBP + -0x44],EDX
005c180f  MOV EAX,dword ptr [EBP + -0x18]
005c1812  CMP EAX,dword ptr [EBP + -0x44]
005c1815  JG 0x005c182a
005c1817  PUSH 0x1
005c1819  MOV ECX,dword ptr [EBP + -0x18]
005c181c  PUSH ECX
005c181d  MOV EDX,dword ptr [EBP + -0x4c]
005c1820  MOV ECX,dword ptr [EDX + 0x4]
005c1823  CALL 0x005c8e20
005c1828  JMP 0x005c17f7
005c182a  MOV EAX,dword ptr [EBP + -0x4c]
005c182d  MOV ECX,dword ptr [EAX + 0x4]
005c1830  MOV EDX,dword ptr [ECX + 0x10]
005c1833  MOV EAX,dword ptr [EDX + 0xc]
005c1836  MOV dword ptr [EBP + -0x48],EAX
005c1839  MOV ECX,dword ptr [EBP + -0x48]
005c183c  PUSH ECX
005c183d  MOV EDX,dword ptr [EBP + -0x4c]
005c1840  MOV ECX,dword ptr [EDX + 0x4]
005c1843  CALL 0x005c8ed0
005c1848  MOV EAX,dword ptr [EBP + -0x4c]
005c184b  MOV EDX,dword ptr [EAX]
005c184d  MOV ECX,dword ptr [EBP + -0x4c]
005c1850  MOV EAX,dword ptr [EDX + 0x10]
005c1853  CALL EAX
005c1855  MOV ECX,dword ptr [EBP + -0x4c]
005c1858  MOV EDX,dword ptr [ECX]
005c185a  MOV ECX,dword ptr [EBP + -0x4c]
005c185d  MOV EAX,dword ptr [EDX + 0x14]
005c1860  CALL EAX
005c1862  PUSH 0x5e
005c1864  MOV ECX,dword ptr [EBP + -0x4c]
005c1867  MOV EDX,dword ptr [ECX]
005c1869  MOV ECX,dword ptr [EBP + -0x4c]
005c186c  MOV EAX,dword ptr [EDX + 0xc]
005c186f  CALL EAX
005c1871  JMP 0x005c19aa
005c1876  MOV ECX,dword ptr [0x007947e4]
005c187c  CALL 0x005dc2e0
005c1881  JMP 0x005c19aa
005c1886  PUSH 0x0
005c1888  PUSH ECX
005c1889  FLD float ptr [0x006b3654]
005c188f  FSTP float ptr [ESP]
005c1892  PUSH ECX
005c1893  FLD1
005c1895  FSTP float ptr [ESP]
005c1898  PUSH 0x1
005c189a  PUSH 0x5
005c189c  PUSH 0x0
005c189e  PUSH 0x0
005c18a0  PUSH 0x18a88
005c18a5  MOV ECX,dword ptr [0x0162ee84]
005c18ab  MOV EDX,dword ptr [ECX]
005c18ad  MOV ECX,dword ptr [0x0162ee84]
005c18b3  MOV EAX,dword ptr [EDX + 0x80]
005c18b9  CALL EAX
005c18bb  MOV ECX,dword ptr [0x007947e0]
005c18c1  CALL 0x005de170
005c18c6  MOV ECX,dword ptr [EBP + -0x4c]
005c18c9  MOV EDX,dword ptr [ECX]
005c18cb  MOV ECX,dword ptr [EBP + -0x4c]
005c18ce  MOV EAX,dword ptr [EDX + 0x10]
005c18d1  CALL EAX
005c18d3  JMP 0x005c19aa
005c18d8  MOV ECX,dword ptr [EBP + -0x4c]
005c18db  MOV EDX,dword ptr [ECX]
005c18dd  MOV ECX,dword ptr [EBP + -0x4c]
005c18e0  MOV EAX,dword ptr [EDX + 0x24]
005c18e3  CALL EAX
005c18e5  MOVZX ECX,AL
005c18e8  TEST ECX,ECX
005c18ea  JNZ 0x005c19a4
005c18f0  MOV EDX,dword ptr [EBP + -0x4c]
005c18f3  MOV EAX,dword ptr [EDX]
005c18f5  MOV ECX,dword ptr [EBP + -0x4c]
005c18f8  MOV EDX,dword ptr [EAX + 0x28]
005c18fb  CALL EDX
005c18fd  MOVZX EAX,AL
005c1900  TEST EAX,EAX
005c1902  JZ 0x005c19a4
005c1908  MOV ECX,dword ptr [EBP + -0x4c]
005c190b  CMP dword ptr [ECX + 0x14],0x0
005c190f  JNZ 0x005c19a4
005c1915  MOV EDX,dword ptr [EBP + -0x4c]
005c1918  CMP dword ptr [EDX + 0xc],0x0
005c191c  JZ 0x005c19a4
005c1922  PUSH 0x28
005c1924  CALL 0x00686d82
005c1929  ADD ESP,0x4
005c192c  MOV dword ptr [EBP + -0x28],EAX
005c192f  MOV dword ptr [EBP + -0x4],0x0
005c1936  CMP dword ptr [EBP + -0x28],0x0
005c193a  JZ 0x005c1949
005c193c  MOV ECX,dword ptr [EBP + -0x28]
005c193f  CALL 0x005b9020
005c1944  MOV dword ptr [EBP + -0x54],EAX
005c1947  JMP 0x005c1950
005c1949  MOV dword ptr [EBP + -0x54],0x0
005c1950  MOV EAX,dword ptr [EBP + -0x54]
005c1953  MOV dword ptr [EBP + -0x24],EAX
005c1956  MOV dword ptr [EBP + -0x4],0xffffffff
005c195d  MOV ECX,dword ptr [EBP + -0x4c]
005c1960  MOV EDX,dword ptr [EBP + -0x24]
005c1963  MOV dword ptr [ECX + 0x14],EDX
005c1966  MOV EAX,dword ptr [EBP + -0x4c]
005c1969  MOV ECX,dword ptr [EAX + 0xc]
005c196c  PUSH ECX
005c196d  MOV EDX,dword ptr [EBP + -0x4c]
005c1970  MOV ECX,dword ptr [EDX + 0x14]
005c1973  CALL 0x005b9350
005c1978  MOV EAX,dword ptr [EBP + -0x4c]
005c197b  MOV ECX,dword ptr [EAX + 0x14]
005c197e  CALL 0x005b94f0
005c1983  MOV ECX,dword ptr [EBP + -0x4c]
005c1986  PUSH ECX
005c1987  PUSH 0x5c0f20
005c198c  MOV EDX,dword ptr [EBP + -0x4c]
005c198f  MOV ECX,dword ptr [EDX + 0x14]
005c1992  CALL 0x005b94d0
005c1997  MOV EAX,dword ptr [EBP + -0x4c]
005c199a  MOV EDX,dword ptr [EAX]
005c199c  MOV ECX,dword ptr [EBP + -0x4c]
005c199f  MOV EAX,dword ptr [EDX + 0x18]
005c19a2  CALL EAX
005c19a4  JMP 0x005c19aa
005c19a6  MOV byte ptr [EBP + -0x11],0x0
005c19aa  CMP dword ptr [EBP + 0x8],0x3158e3
005c19b1  JL 0x005c1a2e
005c19b3  CMP dword ptr [EBP + 0x8],0x315900
005c19ba  JG 0x005c1a2e
005c19bc  MOV ECX,dword ptr [EBP + -0x4c]
005c19bf  MOV EDX,dword ptr [ECX]
005c19c1  MOV ECX,dword ptr [EBP + -0x4c]
005c19c4  MOV EAX,dword ptr [EDX + 0x28]
005c19c7  CALL EAX
005c19c9  MOVZX ECX,AL
005c19cc  TEST ECX,ECX
005c19ce  JZ 0x005c1a2e
005c19d0  MOV EDX,dword ptr [EBP + -0x4c]
005c19d3  MOV EAX,dword ptr [EDX]
005c19d5  MOV ECX,dword ptr [EBP + -0x4c]
005c19d8  MOV EDX,dword ptr [EAX + 0x24]
005c19db  CALL EDX
005c19dd  MOVZX EAX,AL
005c19e0  TEST EAX,EAX
005c19e2  JNZ 0x005c1a2e
005c19e4  MOV ECX,dword ptr [EBP + 0x8]
005c19e7  SUB ECX,0x3158e2
005c19ed  MOV dword ptr [EBP + -0x10],ECX
005c19f0  PUSH 0x1
005c19f2  MOV EDX,dword ptr [EBP + -0x10]
005c19f5  PUSH EDX
005c19f6  MOV EAX,dword ptr [EBP + -0x4c]
005c19f9  MOV ECX,dword ptr [EAX + 0x4]
005c19fc  CALL 0x005c8e20
005c1a01  PUSH 0x0
005c1a03  MOV ECX,dword ptr [EBP + -0x10]
005c1a06  ADD ECX,0x1
005c1a09  PUSH ECX
005c1a0a  MOV EDX,dword ptr [EBP + -0x4c]
005c1a0d  MOV ECX,dword ptr [EDX + 0x4]
005c1a10  CALL 0x005c8e20
005c1a15  MOV EAX,dword ptr [EBP + -0x4c]
005c1a18  MOV EDX,dword ptr [EAX]
005c1a1a  MOV ECX,dword ptr [EBP + -0x4c]
005c1a1d  MOV EAX,dword ptr [EDX + 0x14]
005c1a20  CALL EAX
005c1a22  MOV ECX,dword ptr [EBP + -0x4c]
005c1a25  CALL 0x005c1b60
005c1a2a  MOV byte ptr [EBP + -0x11],0x1
005c1a2e  MOV AL,byte ptr [EBP + -0x11]
005c1a31  MOV ECX,dword ptr [EBP + -0xc]
005c1a34  MOV dword ptr FS:[0x0],ECX
005c1a3b  POP ECX
005c1a3c  MOV ESP,EBP
005c1a3e  POP EBP
005c1a3f  RET 0x4
