; FUN_005f1680  005f1680
005f1680  PUSH EBP
005f1681  MOV EBP,ESP
005f1683  SUB ESP,0x24
005f1686  MOV dword ptr [EBP + -0x1c],ECX
005f1689  MOV dword ptr [EBP + -0xc],0x0
005f1690  MOV dword ptr [EBP + -0x8],0x0
005f1697  MOV dword ptr [EBP + -0x10],0x0
005f169e  MOV EAX,dword ptr [EBP + 0x8]
005f16a1  CMP dword ptr [EAX + 0x20],0x0
005f16a5  JZ 0x005f16f6
005f16a7  MOV ECX,dword ptr [EBP + 0x8]
005f16aa  MOV EDX,dword ptr [ECX + 0x20]
005f16ad  MOV EAX,dword ptr [EDX + 0x1a8]
005f16b3  MOV dword ptr [EBP + -0x10],EAX
005f16b6  MOV ECX,dword ptr [EBP + 0x8]
005f16b9  MOV ECX,dword ptr [ECX + 0x20]
005f16bc  CALL 0x005f84d0
005f16c1  MOV EDX,dword ptr [EBP + 0x8]
005f16c4  ADD EAX,dword ptr [EDX + 0x8]
005f16c7  MOV ECX,dword ptr [EBP + 0x8]
005f16ca  MOV dword ptr [ECX + 0x8],EAX
005f16cd  MOV EDX,dword ptr [EBP + 0x8]
005f16d0  MOV ECX,dword ptr [EDX + 0x20]
005f16d3  CALL 0x005f84f0
005f16d8  MOV ECX,dword ptr [EBP + 0x8]
005f16db  ADD EAX,dword ptr [ECX + 0xc]
005f16de  MOV EDX,dword ptr [EBP + 0x8]
005f16e1  MOV dword ptr [EDX + 0xc],EAX
005f16e4  MOV EAX,dword ptr [EBP + 0x8]
005f16e7  MOV ECX,dword ptr [EAX + 0x8]
005f16ea  MOV dword ptr [EBP + -0xc],ECX
005f16ed  MOV EDX,dword ptr [EBP + 0x8]
005f16f0  MOV EAX,dword ptr [EDX + 0xc]
005f16f3  MOV dword ptr [EBP + -0x8],EAX
005f16f6  MOV ECX,dword ptr [EBP + 0x8]
005f16f9  MOVZX EDX,byte ptr [ECX + 0x4]
005f16fd  TEST EDX,EDX
005f16ff  JNZ 0x005f1a4a
005f1705  MOV EAX,dword ptr [EBP + 0x8]
005f1708  CMP dword ptr [EAX + 0x20],0x0
005f170c  JZ 0x005f1a4a
005f1712  MOV ECX,dword ptr [0x015e55e8]
005f1718  CALL 0x005f3fe0
005f171d  TEST EAX,EAX
005f171f  JZ 0x005f1796
005f1721  MOV ECX,dword ptr [0x015e55e8]
005f1727  CALL 0x005f3fe0
005f172c  MOVZX ECX,byte ptr [EAX + 0x1b1]
005f1733  TEST ECX,ECX
005f1735  JNZ 0x005f1796
005f1737  MOV ECX,dword ptr [0x015e55e8]
005f173d  CALL 0x005f3fe0
005f1742  MOV EDX,dword ptr [EBP + 0x8]
005f1745  MOV dword ptr [EDX + 0x20],EAX
005f1748  MOV EAX,dword ptr [EBP + 0x8]
005f174b  MOV ECX,dword ptr [EAX + 0x20]
005f174e  CALL 0x005f84d0
005f1753  MOV ECX,dword ptr [EBP + 0x8]
005f1756  MOV EDX,dword ptr [ECX + 0x8]
005f1759  SUB EDX,EAX
005f175b  MOV EAX,dword ptr [EBP + 0x8]
005f175e  MOV dword ptr [EAX + 0x8],EDX
005f1761  MOV ECX,dword ptr [EBP + 0x8]
005f1764  MOV ECX,dword ptr [ECX + 0x20]
005f1767  CALL 0x005f84f0
005f176c  MOV EDX,dword ptr [EBP + 0x8]
005f176f  MOV ECX,dword ptr [EDX + 0xc]
005f1772  SUB ECX,EAX
005f1774  MOV EDX,dword ptr [EBP + 0x8]
005f1777  MOV dword ptr [EDX + 0xc],ECX
005f177a  MOV EAX,dword ptr [EBP + 0x8]
005f177d  PUSH EAX
005f177e  MOV ECX,dword ptr [EBP + 0x8]
005f1781  MOV EDX,dword ptr [ECX + 0x20]
005f1784  MOV EAX,dword ptr [EBP + 0x8]
005f1787  MOV ECX,dword ptr [EAX + 0x20]
005f178a  MOV EDX,dword ptr [EDX]
005f178c  MOV EAX,dword ptr [EDX + 0x4]
005f178f  CALL EAX
005f1791  JMP 0x005f1a4a
005f1796  MOV ECX,dword ptr [0x015e55e8]
005f179c  CALL 0x005f41f0
005f17a1  TEST EAX,EAX
005f17a3  JZ 0x005f1856
005f17a9  MOV ECX,dword ptr [0x015e55e8]
005f17af  CALL 0x005f41f0
005f17b4  MOV ECX,dword ptr [EBP + 0x8]
005f17b7  MOV dword ptr [ECX + 0x20],EAX
005f17ba  MOV EDX,dword ptr [EBP + 0x8]
005f17bd  MOV ECX,dword ptr [EDX + 0x20]
005f17c0  CALL 0x005f84d0
005f17c5  MOV ECX,dword ptr [EBP + 0x8]
005f17c8  MOV EDX,dword ptr [ECX + 0x8]
005f17cb  SUB EDX,EAX
005f17cd  MOV EAX,dword ptr [EBP + 0x8]
005f17d0  MOV dword ptr [EAX + 0x8],EDX
005f17d3  MOV ECX,dword ptr [EBP + 0x8]
005f17d6  MOV ECX,dword ptr [ECX + 0x20]
005f17d9  CALL 0x005f84f0
005f17de  MOV EDX,dword ptr [EBP + 0x8]
005f17e1  MOV ECX,dword ptr [EDX + 0xc]
005f17e4  SUB ECX,EAX
005f17e6  MOV EDX,dword ptr [EBP + 0x8]
005f17e9  MOV dword ptr [EDX + 0xc],ECX
005f17ec  MOV EAX,dword ptr [EBP + 0x8]
005f17ef  PUSH EAX
005f17f0  MOV ECX,dword ptr [EBP + 0x8]
005f17f3  MOV EDX,dword ptr [ECX + 0x20]
005f17f6  MOV EAX,dword ptr [EBP + 0x8]
005f17f9  MOV ECX,dword ptr [EAX + 0x20]
005f17fc  MOV EDX,dword ptr [EDX]
005f17fe  MOV EAX,dword ptr [EDX + 0x4]
005f1801  CALL EAX
005f1803  MOV ECX,dword ptr [EBP + 0x8]
005f1806  MOVZX EDX,byte ptr [ECX + 0x4]
005f180a  TEST EDX,EDX
005f180c  JZ 0x005f1813
005f180e  JMP 0x005f1a4a
005f1813  MOV EAX,dword ptr [EBP + 0x8]
005f1816  MOV ECX,dword ptr [EBP + -0xc]
005f1819  MOV dword ptr [EAX + 0x8],ECX
005f181c  MOV EDX,dword ptr [EBP + 0x8]
005f181f  MOV EAX,dword ptr [EBP + -0x8]
005f1822  MOV dword ptr [EDX + 0xc],EAX
005f1825  MOV ECX,dword ptr [EBP + -0x10]
005f1828  PUSH ECX
005f1829  MOV EDX,dword ptr [EBP + 0x8]
005f182c  MOV EAX,dword ptr [EDX + 0xc]
005f182f  PUSH EAX
005f1830  MOV ECX,dword ptr [EBP + 0x8]
005f1833  MOV EDX,dword ptr [ECX + 0x8]
005f1836  PUSH EDX
005f1837  MOV ECX,dword ptr [0x015e55e8]
005f183d  CALL 0x005f40e0
005f1842  MOV ECX,dword ptr [EBP + 0x8]
005f1845  MOV dword ptr [ECX + 0x20],EAX
005f1848  MOV EDX,dword ptr [EBP + 0x8]
005f184b  CMP dword ptr [EDX + 0x20],0x0
005f184f  JNZ 0x005f1856
005f1851  JMP 0x005f1a4a
005f1856  MOV EAX,dword ptr [EBP + 0x8]
005f1859  MOV ECX,dword ptr [EAX + 0x18]
005f185c  MOV dword ptr [EBP + -0x20],ECX
005f185f  CMP dword ptr [EBP + -0x20],0x1
005f1863  JZ 0x005f186a
005f1865  JMP 0x005f1970
005f186a  MOV dword ptr [EBP + -0x4],0x0
005f1871  JMP 0x005f187c
005f1873  MOV EDX,dword ptr [EBP + -0x4]
005f1876  ADD EDX,0x1
005f1879  MOV dword ptr [EBP + -0x4],EDX
005f187c  MOV ECX,dword ptr [EBP + -0x1c]
005f187f  ADD ECX,0x18
005f1882  CALL 0x0060c9a0
005f1887  CMP dword ptr [EBP + -0x4],EAX
005f188a  JGE 0x005f18bd
005f188c  MOV EAX,dword ptr [EBP + -0x4]
005f188f  PUSH EAX
005f1890  MOV ECX,dword ptr [EBP + -0x1c]
005f1893  ADD ECX,0x18
005f1896  CALL 0x0060ca40
005f189b  MOV dword ptr [EBP + -0x24],EAX
005f189e  MOV ECX,dword ptr [EBP + 0x8]
005f18a1  PUSH ECX
005f18a2  MOV EDX,dword ptr [EBP + -0x24]
005f18a5  MOV EAX,dword ptr [EDX]
005f18a7  MOV ECX,dword ptr [EBP + -0x24]
005f18aa  MOV EDX,dword ptr [EAX + 0x84]
005f18b0  CALL EDX
005f18b2  MOVZX EAX,AL
005f18b5  TEST EAX,EAX
005f18b7  JZ 0x005f18bb
005f18b9  JMP 0x005f18bd
005f18bb  JMP 0x005f1873
005f18bd  MOV ECX,dword ptr [EBP + -0x1c]
005f18c0  ADD ECX,0x18
005f18c3  CALL 0x0060c9a0
005f18c8  CMP dword ptr [EBP + -0x4],EAX
005f18cb  JNZ 0x005f1922
005f18cd  MOV dword ptr [EBP + -0x4],0x0
005f18d4  JMP 0x005f18df
005f18d6  MOV ECX,dword ptr [EBP + -0x4]
005f18d9  ADD ECX,0x1
005f18dc  MOV dword ptr [EBP + -0x4],ECX
005f18df  MOV ECX,dword ptr [EBP + -0x1c]
005f18e2  ADD ECX,0x8
005f18e5  CALL 0x0060c9a0
005f18ea  CMP dword ptr [EBP + -0x4],EAX
005f18ed  JGE 0x005f190a
005f18ef  MOV EDX,dword ptr [EBP + -0x4]
005f18f2  PUSH EDX
005f18f3  MOV ECX,dword ptr [EBP + -0x1c]
005f18f6  ADD ECX,0x8
005f18f9  CALL 0x0060ca40
005f18fe  MOV ECX,dword ptr [EBP + 0x8]
005f1901  CMP dword ptr [ECX + 0x20],EAX
005f1904  JNZ 0x005f1908
005f1906  JMP 0x005f190a
005f1908  JMP 0x005f18d6
005f190a  MOV ECX,dword ptr [EBP + -0x1c]
005f190d  ADD ECX,0x8
005f1910  CALL 0x0060c9a0
005f1915  CMP dword ptr [EBP + -0x4],EAX
005f1918  JNZ 0x005f1922
005f191a  MOV ECX,dword ptr [EBP + -0x1c]
005f191d  CALL 0x005f2870
005f1922  MOV EDX,dword ptr [EBP + 0x8]
005f1925  MOV ECX,dword ptr [EDX + 0x20]
005f1928  CALL 0x005f84d0
005f192d  MOV ECX,dword ptr [EBP + 0x8]
005f1930  MOV EDX,dword ptr [ECX + 0x8]
005f1933  SUB EDX,EAX
005f1935  MOV EAX,dword ptr [EBP + 0x8]
005f1938  MOV dword ptr [EAX + 0x8],EDX
005f193b  MOV ECX,dword ptr [EBP + 0x8]
005f193e  MOV ECX,dword ptr [ECX + 0x20]
005f1941  CALL 0x005f84f0
005f1946  MOV EDX,dword ptr [EBP + 0x8]
005f1949  MOV ECX,dword ptr [EDX + 0xc]
005f194c  SUB ECX,EAX
005f194e  MOV EDX,dword ptr [EBP + 0x8]
005f1951  MOV dword ptr [EDX + 0xc],ECX
005f1954  MOV EAX,dword ptr [EBP + 0x8]
005f1957  PUSH EAX
005f1958  MOV ECX,dword ptr [EBP + 0x8]
005f195b  MOV EDX,dword ptr [ECX + 0x20]
005f195e  MOV EAX,dword ptr [EBP + 0x8]
005f1961  MOV ECX,dword ptr [EAX + 0x20]
005f1964  MOV EDX,dword ptr [EDX]
005f1966  MOV EAX,dword ptr [EDX + 0x4]
005f1969  CALL EAX
005f196b  JMP 0x005f1a4a
005f1970  MOV ECX,dword ptr [0x015e55e8]
005f1976  ADD ECX,0x4
005f1979  CALL 0x0060c9a0
005f197e  SUB EAX,0x1
005f1981  MOV dword ptr [EBP + -0x4],EAX
005f1984  JMP 0x005f198f
005f1986  MOV ECX,dword ptr [EBP + -0x4]
005f1989  SUB ECX,0x1
005f198c  MOV dword ptr [EBP + -0x4],ECX
005f198f  CMP dword ptr [EBP + -0x4],0x0
005f1993  JL 0x005f1a4a
005f1999  MOV EDX,dword ptr [EBP + -0x4]
005f199c  PUSH EDX
005f199d  MOV ECX,dword ptr [0x015e55e8]
005f19a3  ADD ECX,0x4
005f19a6  CALL 0x0060ca40
005f19ab  MOV dword ptr [EBP + -0x14],EAX
005f19ae  MOV EAX,dword ptr [EBP + -0x14]
005f19b1  MOV ECX,dword ptr [EAX + 0x1a8]
005f19b7  MOV dword ptr [EBP + -0x18],ECX
005f19ba  MOV EDX,dword ptr [EBP + -0x18]
005f19bd  CMP EDX,dword ptr [EBP + -0x10]
005f19c0  JNZ 0x005f19df
005f19c2  MOV ECX,dword ptr [EBP + -0x14]
005f19c5  CALL 0x005f88f0
005f19ca  MOVZX EAX,AL
005f19cd  TEST EAX,EAX
005f19cf  JNZ 0x005f19df
005f19d1  MOV ECX,dword ptr [EBP + -0x14]
005f19d4  MOVZX EDX,byte ptr [ECX + 0x1b1]
005f19db  TEST EDX,EDX
005f19dd  JZ 0x005f19e1
005f19df  JMP 0x005f1986
005f19e1  MOV EAX,dword ptr [EBP + 0x8]
005f19e4  MOV ECX,dword ptr [EBP + -0xc]
005f19e7  MOV dword ptr [EAX + 0x8],ECX
005f19ea  MOV EDX,dword ptr [EBP + 0x8]
005f19ed  MOV EAX,dword ptr [EBP + -0x8]
005f19f0  MOV dword ptr [EDX + 0xc],EAX
005f19f3  MOV ECX,dword ptr [EBP + 0x8]
005f19f6  MOV EDX,dword ptr [EBP + -0x14]
005f19f9  MOV dword ptr [ECX + 0x20],EDX
005f19fc  MOV EAX,dword ptr [EBP + 0x8]
005f19ff  MOV ECX,dword ptr [EAX + 0x20]
005f1a02  CALL 0x005f84d0
005f1a07  MOV ECX,dword ptr [EBP + 0x8]
005f1a0a  MOV EDX,dword ptr [ECX + 0x8]
005f1a0d  SUB EDX,EAX
005f1a0f  MOV EAX,dword ptr [EBP + 0x8]
005f1a12  MOV dword ptr [EAX + 0x8],EDX
005f1a15  MOV ECX,dword ptr [EBP + 0x8]
005f1a18  MOV ECX,dword ptr [ECX + 0x20]
005f1a1b  CALL 0x005f84f0
005f1a20  MOV EDX,dword ptr [EBP + 0x8]
005f1a23  MOV ECX,dword ptr [EDX + 0xc]
005f1a26  SUB ECX,EAX
005f1a28  MOV EDX,dword ptr [EBP + 0x8]
005f1a2b  MOV dword ptr [EDX + 0xc],ECX
005f1a2e  MOV EAX,dword ptr [EBP + 0x8]
005f1a31  PUSH EAX
005f1a32  MOV ECX,dword ptr [EBP + 0x8]
005f1a35  MOV EDX,dword ptr [ECX + 0x20]
005f1a38  MOV EAX,dword ptr [EBP + 0x8]
005f1a3b  MOV ECX,dword ptr [EAX + 0x20]
005f1a3e  MOV EDX,dword ptr [EDX]
005f1a40  MOV EAX,dword ptr [EDX + 0x4]
005f1a43  CALL EAX
005f1a45  JMP 0x005f1986
005f1a4a  MOV ESP,EBP
005f1a4c  POP EBP
005f1a4d  RET 0x4
