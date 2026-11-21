; FUN_006b1130  006b1130
006b1130  PUSH EBP
006b1131  MOV EBP,ESP
006b1133  PUSH -0x1
006b1135  PUSH 0x6a977a
006b113a  MOV EAX,FS:[0x0]
006b1140  PUSH EAX
006b1141  SUB ESP,0x108
006b1147  MOV EAX,[0x00781870]
006b114c  XOR EAX,EBP
006b114e  PUSH EAX
006b114f  LEA EAX,[EBP + -0xc]
006b1152  MOV FS:[0x0],EAX
006b1158  PUSH 0x4
006b115a  CALL 0x00686d82
006b115f  ADD ESP,0x4
006b1162  MOV dword ptr [EBP + -0x14],EAX
006b1165  MOV dword ptr [EBP + -0x4],0x0
006b116c  CMP dword ptr [EBP + -0x14],0x0
006b1170  JZ 0x006b1182
006b1172  MOV ECX,dword ptr [EBP + -0x14]
006b1175  CALL 0x004068d0
006b117a  MOV dword ptr [EBP + 0xffffff40],EAX
006b1180  JMP 0x006b118c
006b1182  MOV dword ptr [EBP + 0xffffff40],0x0
006b118c  MOV EAX,dword ptr [EBP + 0xffffff40]
006b1192  MOV dword ptr [EBP + -0x10],EAX
006b1195  MOV dword ptr [EBP + -0x4],0xffffffff
006b119c  MOV ECX,dword ptr [EBP + -0x10]
006b119f  MOV dword ptr [0x007947f4],ECX
006b11a5  MOV dword ptr [0x007947f8],0x311280
006b11af  MOV dword ptr [0x007947fc],0x2
006b11b9  PUSH 0x4
006b11bb  CALL 0x00686d82
006b11c0  ADD ESP,0x4
006b11c3  MOV dword ptr [EBP + -0x1c],EAX
006b11c6  MOV dword ptr [EBP + -0x4],0x1
006b11cd  CMP dword ptr [EBP + -0x1c],0x0
006b11d1  JZ 0x006b11e3
006b11d3  MOV ECX,dword ptr [EBP + -0x1c]
006b11d6  CALL 0x004176d0
006b11db  MOV dword ptr [EBP + 0xffffff3c],EAX
006b11e1  JMP 0x006b11ed
006b11e3  MOV dword ptr [EBP + 0xffffff3c],0x0
006b11ed  MOV EDX,dword ptr [EBP + 0xffffff3c]
006b11f3  MOV dword ptr [EBP + -0x18],EDX
006b11f6  MOV dword ptr [EBP + -0x4],0xffffffff
006b11fd  MOV EAX,dword ptr [EBP + -0x18]
006b1200  MOV [0x00794800],EAX
006b1205  MOV dword ptr [0x00794804],0x30d7e8
006b120f  MOV dword ptr [0x00794808],0x3
006b1219  PUSH 0x4
006b121b  CALL 0x00686d82
006b1220  ADD ESP,0x4
006b1223  MOV dword ptr [EBP + -0x24],EAX
006b1226  MOV dword ptr [EBP + -0x4],0x2
006b122d  CMP dword ptr [EBP + -0x24],0x0
006b1231  JZ 0x006b1243
006b1233  MOV ECX,dword ptr [EBP + -0x24]
006b1236  CALL 0x00425350
006b123b  MOV dword ptr [EBP + 0xffffff38],EAX
006b1241  JMP 0x006b124d
006b1243  MOV dword ptr [EBP + 0xffffff38],0x0
006b124d  MOV ECX,dword ptr [EBP + 0xffffff38]
006b1253  MOV dword ptr [EBP + -0x20],ECX
006b1256  MOV dword ptr [EBP + -0x4],0xffffffff
006b125d  MOV EDX,dword ptr [EBP + -0x20]
006b1260  MOV dword ptr [0x0079480c],EDX
006b1266  MOV dword ptr [0x00794810],0x3106c8
006b1270  MOV dword ptr [0x00794814],0x4
006b127a  PUSH 0x4
006b127c  CALL 0x00686d82
006b1281  ADD ESP,0x4
006b1284  MOV dword ptr [EBP + -0x2c],EAX
006b1287  MOV dword ptr [EBP + -0x4],0x3
006b128e  CMP dword ptr [EBP + -0x2c],0x0
006b1292  JZ 0x006b12a4
006b1294  MOV ECX,dword ptr [EBP + -0x2c]
006b1297  CALL 0x00433800
006b129c  MOV dword ptr [EBP + 0xffffff34],EAX
006b12a2  JMP 0x006b12ae
006b12a4  MOV dword ptr [EBP + 0xffffff34],0x0
006b12ae  MOV EAX,dword ptr [EBP + 0xffffff34]
006b12b4  MOV dword ptr [EBP + -0x28],EAX
006b12b7  MOV dword ptr [EBP + -0x4],0xffffffff
006b12be  MOV ECX,dword ptr [EBP + -0x28]
006b12c1  MOV dword ptr [0x00794818],ECX
006b12c7  MOV dword ptr [0x0079481c],0x30dbd0
006b12d1  MOV dword ptr [0x00794820],0x7
006b12db  PUSH 0x4
006b12dd  CALL 0x00686d82
006b12e2  ADD ESP,0x4
006b12e5  MOV dword ptr [EBP + -0x34],EAX
006b12e8  MOV dword ptr [EBP + -0x4],0x4
006b12ef  CMP dword ptr [EBP + -0x34],0x0
006b12f3  JZ 0x006b1305
006b12f5  MOV ECX,dword ptr [EBP + -0x34]
006b12f8  CALL 0x00444480
006b12fd  MOV dword ptr [EBP + 0xffffff30],EAX
006b1303  JMP 0x006b130f
006b1305  MOV dword ptr [EBP + 0xffffff30],0x0
006b130f  MOV EDX,dword ptr [EBP + 0xffffff30]
006b1315  MOV dword ptr [EBP + -0x30],EDX
006b1318  MOV dword ptr [EBP + -0x4],0xffffffff
006b131f  MOV EAX,dword ptr [EBP + -0x30]
006b1322  MOV [0x00794824],EAX
006b1327  MOV dword ptr [0x00794828],0x30f728
006b1331  MOV dword ptr [0x0079482c],0x8
006b133b  PUSH 0x4
006b133d  CALL 0x00686d82
006b1342  ADD ESP,0x4
006b1345  MOV dword ptr [EBP + -0x3c],EAX
006b1348  MOV dword ptr [EBP + -0x4],0x5
006b134f  CMP dword ptr [EBP + -0x3c],0x0
006b1353  JZ 0x006b1365
006b1355  MOV ECX,dword ptr [EBP + -0x3c]
006b1358  CALL 0x00583b60
006b135d  MOV dword ptr [EBP + 0xffffff2c],EAX
006b1363  JMP 0x006b136f
006b1365  MOV dword ptr [EBP + 0xffffff2c],0x0
006b136f  MOV ECX,dword ptr [EBP + 0xffffff2c]
006b1375  MOV dword ptr [EBP + -0x38],ECX
006b1378  MOV dword ptr [EBP + -0x4],0xffffffff
006b137f  MOV EDX,dword ptr [EBP + -0x38]
006b1382  MOV dword ptr [0x00794830],EDX
006b1388  MOV dword ptr [0x00794834],0x30dfb8
006b1392  MOV dword ptr [0x00794838],0x9
006b139c  PUSH 0x4
006b139e  CALL 0x00686d82
006b13a3  ADD ESP,0x4
006b13a6  MOV dword ptr [EBP + -0x44],EAX
006b13a9  MOV dword ptr [EBP + -0x4],0x6
006b13b0  CMP dword ptr [EBP + -0x44],0x0
006b13b4  JZ 0x006b13c6
006b13b6  MOV ECX,dword ptr [EBP + -0x44]
006b13b9  CALL 0x0044bde0
006b13be  MOV dword ptr [EBP + 0xffffff28],EAX
006b13c4  JMP 0x006b13d0
006b13c6  MOV dword ptr [EBP + 0xffffff28],0x0
006b13d0  MOV EAX,dword ptr [EBP + 0xffffff28]
006b13d6  MOV dword ptr [EBP + -0x40],EAX
006b13d9  MOV dword ptr [EBP + -0x4],0xffffffff
006b13e0  MOV ECX,dword ptr [EBP + -0x40]
006b13e3  MOV dword ptr [0x0079483c],ECX
006b13e9  MOV dword ptr [0x00794840],0x310ab0
006b13f3  MOV dword ptr [0x00794844],0xa
006b13fd  PUSH 0x8
006b13ff  CALL 0x00686d82
006b1404  ADD ESP,0x4
006b1407  MOV dword ptr [EBP + -0x4c],EAX
006b140a  MOV dword ptr [EBP + -0x4],0x7
006b1411  CMP dword ptr [EBP + -0x4c],0x0
006b1415  JZ 0x006b1429
006b1417  PUSH 0x0
006b1419  MOV ECX,dword ptr [EBP + -0x4c]
006b141c  CALL 0x0045ebb0
006b1421  MOV dword ptr [EBP + 0xffffff24],EAX
006b1427  JMP 0x006b1433
006b1429  MOV dword ptr [EBP + 0xffffff24],0x0
006b1433  MOV EDX,dword ptr [EBP + 0xffffff24]
006b1439  MOV dword ptr [EBP + -0x48],EDX
006b143c  MOV dword ptr [EBP + -0x4],0xffffffff
006b1443  MOV EAX,dword ptr [EBP + -0x48]
006b1446  MOV [0x00794848],EAX
006b144b  MOV dword ptr [0x0079484c],0x30e3a0
006b1455  MOV dword ptr [0x00794850],0xb
006b145f  PUSH 0x4
006b1461  CALL 0x00686d82
006b1466  ADD ESP,0x4
006b1469  MOV dword ptr [EBP + -0x54],EAX
006b146c  MOV dword ptr [EBP + -0x4],0x8
006b1473  CMP dword ptr [EBP + -0x54],0x0
006b1477  JZ 0x006b1489
006b1479  MOV ECX,dword ptr [EBP + -0x54]
006b147c  CALL 0x004fd7b0
006b1481  MOV dword ptr [EBP + 0xffffff20],EAX
006b1487  JMP 0x006b1493
006b1489  MOV dword ptr [EBP + 0xffffff20],0x0
006b1493  MOV ECX,dword ptr [EBP + 0xffffff20]
006b1499  MOV dword ptr [EBP + -0x50],ECX
006b149c  MOV dword ptr [EBP + -0x4],0xffffffff
006b14a3  MOV EDX,dword ptr [EBP + -0x50]
006b14a6  MOV dword ptr [0x00794854],EDX
006b14ac  MOV dword ptr [0x00794858],0x2f7470
006b14b6  MOV dword ptr [0x0079485c],0xc
006b14c0  PUSH 0x4
006b14c2  CALL 0x00686d82
006b14c7  ADD ESP,0x4
006b14ca  MOV dword ptr [EBP + -0x5c],EAX
006b14cd  MOV dword ptr [EBP + -0x4],0x9
006b14d4  CMP dword ptr [EBP + -0x5c],0x0
006b14d8  JZ 0x006b14ea
006b14da  MOV ECX,dword ptr [EBP + -0x5c]
006b14dd  CALL 0x00527170
006b14e2  MOV dword ptr [EBP + 0xffffff1c],EAX
006b14e8  JMP 0x006b14f4
006b14ea  MOV dword ptr [EBP + 0xffffff1c],0x0
006b14f4  MOV EAX,dword ptr [EBP + 0xffffff1c]
006b14fa  MOV dword ptr [EBP + -0x58],EAX
006b14fd  MOV dword ptr [EBP + -0x4],0xffffffff
006b1504  MOV ECX,dword ptr [EBP + -0x58]
006b1507  MOV dword ptr [0x00794860],ECX
006b150d  MOV dword ptr [0x00794864],0x30eb70
006b1517  MOV dword ptr [0x00794868],0xe
006b1521  PUSH 0x4
006b1523  CALL 0x00686d82
006b1528  ADD ESP,0x4
006b152b  MOV dword ptr [EBP + -0x64],EAX
006b152e  MOV dword ptr [EBP + -0x4],0xa
006b1535  CMP dword ptr [EBP + -0x64],0x0
006b1539  JZ 0x006b154b
006b153b  MOV ECX,dword ptr [EBP + -0x64]
006b153e  CALL 0x005350a0
006b1543  MOV dword ptr [EBP + 0xffffff18],EAX
006b1549  JMP 0x006b1555
006b154b  MOV dword ptr [EBP + 0xffffff18],0x0
006b1555  MOV EDX,dword ptr [EBP + 0xffffff18]
006b155b  MOV dword ptr [EBP + -0x60],EDX
006b155e  MOV dword ptr [EBP + -0x4],0xffffffff
006b1565  MOV EAX,dword ptr [EBP + -0x60]
006b1568  MOV [0x0079486c],EAX
006b156d  MOV dword ptr [0x00794870],0x30ef58
006b1577  MOV dword ptr [0x00794874],0xf
006b1581  PUSH 0x4
006b1583  CALL 0x00686d82
006b1588  ADD ESP,0x4
006b158b  MOV dword ptr [EBP + -0x6c],EAX
006b158e  MOV dword ptr [EBP + -0x4],0xb
006b1595  CMP dword ptr [EBP + -0x6c],0x0
006b1599  JZ 0x006b15ab
006b159b  MOV ECX,dword ptr [EBP + -0x6c]
006b159e  CALL 0x0053fc50
006b15a3  MOV dword ptr [EBP + 0xffffff14],EAX
006b15a9  JMP 0x006b15b5
006b15ab  MOV dword ptr [EBP + 0xffffff14],0x0
006b15b5  MOV ECX,dword ptr [EBP + 0xffffff14]
006b15bb  MOV dword ptr [EBP + -0x68],ECX
006b15be  MOV dword ptr [EBP + -0x4],0xffffffff
006b15c5  MOV EDX,dword ptr [EBP + -0x68]
006b15c8  MOV dword ptr [0x00794878],EDX
006b15ce  MOV dword ptr [0x0079487c],0x310e98
006b15d8  MOV dword ptr [0x00794880],0x10
006b15e2  PUSH 0x4
006b15e4  CALL 0x00686d82
006b15e9  ADD ESP,0x4
006b15ec  MOV dword ptr [EBP + -0x74],EAX
006b15ef  MOV dword ptr [EBP + -0x4],0xc
006b15f6  CMP dword ptr [EBP + -0x74],0x0
006b15fa  JZ 0x006b160c
006b15fc  MOV ECX,dword ptr [EBP + -0x74]
006b15ff  CALL 0x00548130
006b1604  MOV dword ptr [EBP + 0xffffff10],EAX
006b160a  JMP 0x006b1616
006b160c  MOV dword ptr [EBP + 0xffffff10],0x0
006b1616  MOV EAX,dword ptr [EBP + 0xffffff10]
006b161c  MOV dword ptr [EBP + -0x70],EAX
006b161f  MOV dword ptr [EBP + -0x4],0xffffffff
006b1626  MOV ECX,dword ptr [EBP + -0x70]
006b1629  MOV dword ptr [0x00794884],ECX
006b162f  MOV dword ptr [0x00794888],0x311668
006b1639  MOV dword ptr [0x0079488c],0x11
006b1643  PUSH 0x4
006b1645  CALL 0x00686d82
006b164a  ADD ESP,0x4
006b164d  MOV dword ptr [EBP + -0x7c],EAX
006b1650  MOV dword ptr [EBP + -0x4],0xd
006b1657  CMP dword ptr [EBP + -0x7c],0x0
006b165b  JZ 0x006b166d
006b165d  MOV ECX,dword ptr [EBP + -0x7c]
006b1660  CALL 0x00556890
006b1665  MOV dword ptr [EBP + 0xffffff0c],EAX
006b166b  JMP 0x006b1677
006b166d  MOV dword ptr [EBP + 0xffffff0c],0x0
006b1677  MOV EDX,dword ptr [EBP + 0xffffff0c]
006b167d  MOV dword ptr [EBP + -0x78],EDX
006b1680  MOV dword ptr [EBP + -0x4],0xffffffff
006b1687  MOV EAX,dword ptr [EBP + -0x78]
006b168a  MOV [0x00794890],EAX
006b168f  MOV dword ptr [0x00794894],0x30f340
006b1699  MOV dword ptr [0x00794898],0x12
006b16a3  PUSH 0x4
006b16a5  CALL 0x00686d82
006b16aa  ADD ESP,0x4
006b16ad  MOV dword ptr [EBP + 0xffffff7c],EAX
006b16b3  MOV dword ptr [EBP + -0x4],0xe
006b16ba  CMP dword ptr [EBP + 0xffffff7c],0x0
006b16c1  JZ 0x006b16d6
006b16c3  MOV ECX,dword ptr [EBP + 0xffffff7c]
006b16c9  CALL 0x00567b30
006b16ce  MOV dword ptr [EBP + 0xffffff08],EAX
006b16d4  JMP 0x006b16e0
006b16d6  MOV dword ptr [EBP + 0xffffff08],0x0
006b16e0  MOV ECX,dword ptr [EBP + 0xffffff08]
006b16e6  MOV dword ptr [EBP + -0x80],ECX
006b16e9  MOV dword ptr [EBP + -0x4],0xffffffff
006b16f0  MOV EDX,dword ptr [EBP + -0x80]
006b16f3  MOV dword ptr [0x0079489c],EDX
006b16f9  MOV dword ptr [0x007948a0],0x30f340
006b1703  MOV dword ptr [0x007948a4],0x13
006b170d  PUSH 0x4
006b170f  CALL 0x00686d82
006b1714  ADD ESP,0x4
006b1717  MOV dword ptr [EBP + 0xffffff74],EAX
006b171d  MOV dword ptr [EBP + -0x4],0xf
006b1724  CMP dword ptr [EBP + 0xffffff74],0x0
006b172b  JZ 0x006b1740
006b172d  MOV ECX,dword ptr [EBP + 0xffffff74]
006b1733  CALL 0x00579650
006b1738  MOV dword ptr [EBP + 0xffffff04],EAX
006b173e  JMP 0x006b174a
006b1740  MOV dword ptr [EBP + 0xffffff04],0x0
006b174a  MOV EAX,dword ptr [EBP + 0xffffff04]
006b1750  MOV dword ptr [EBP + 0xffffff78],EAX
006b1756  MOV dword ptr [EBP + -0x4],0xffffffff
006b175d  MOV ECX,dword ptr [EBP + 0xffffff78]
006b1763  MOV dword ptr [0x007948a8],ECX
006b1769  MOV dword ptr [0x007948ac],0x30ef58
006b1773  MOV dword ptr [0x007948b0],0x14
006b177d  PUSH 0x4
006b177f  CALL 0x00686d82
006b1784  ADD ESP,0x4
006b1787  MOV dword ptr [EBP + 0xffffff6c],EAX
006b178d  MOV dword ptr [EBP + -0x4],0x10
006b1794  CMP dword ptr [EBP + 0xffffff6c],0x0
006b179b  JZ 0x006b17b0
006b179d  MOV ECX,dword ptr [EBP + 0xffffff6c]
006b17a3  CALL 0x00572d00
006b17a8  MOV dword ptr [EBP + 0xffffff00],EAX
006b17ae  JMP 0x006b17ba
006b17b0  MOV dword ptr [EBP + 0xffffff00],0x0
006b17ba  MOV EDX,dword ptr [EBP + 0xffffff00]
006b17c0  MOV dword ptr [EBP + 0xffffff70],EDX
006b17c6  MOV dword ptr [EBP + -0x4],0xffffffff
006b17cd  MOV EAX,dword ptr [EBP + 0xffffff70]
006b17d3  MOV [0x007948b4],EAX
006b17d8  MOV dword ptr [0x007948b8],0x30ef58
006b17e2  MOV dword ptr [0x007948bc],0x6
006b17ec  PUSH 0x4
006b17ee  CALL 0x00686d82
006b17f3  ADD ESP,0x4
006b17f6  MOV dword ptr [EBP + 0xffffff64],EAX
006b17fc  MOV dword ptr [EBP + -0x4],0x11
006b1803  CMP dword ptr [EBP + 0xffffff64],0x0
006b180a  JZ 0x006b181f
006b180c  MOV ECX,dword ptr [EBP + 0xffffff64]
006b1812  CALL 0x005971d0
006b1817  MOV dword ptr [EBP + 0xfffffefc],EAX
006b181d  JMP 0x006b1829
006b181f  MOV dword ptr [EBP + 0xfffffefc],0x0
006b1829  MOV ECX,dword ptr [EBP + 0xfffffefc]
006b182f  MOV dword ptr [EBP + 0xffffff68],ECX
006b1835  MOV dword ptr [EBP + -0x4],0xffffffff
006b183c  MOV EDX,dword ptr [EBP + 0xffffff68]
006b1842  MOV dword ptr [0x007948c0],EDX
006b1848  MOV dword ptr [0x007948c4],0x312222
006b1852  MOV dword ptr [0x007948c8],0x1
006b185c  PUSH 0x4
006b185e  CALL 0x00686d82
006b1863  ADD ESP,0x4
006b1866  MOV dword ptr [EBP + 0xffffff5c],EAX
006b186c  MOV dword ptr [EBP + -0x4],0x12
006b1873  CMP dword ptr [EBP + 0xffffff5c],0x0
006b187a  JZ 0x006b188f
006b187c  MOV ECX,dword ptr [EBP + 0xffffff5c]
006b1882  CALL 0x005a13b0
006b1887  MOV dword ptr [EBP + 0xfffffef8],EAX
006b188d  JMP 0x006b1899
006b188f  MOV dword ptr [EBP + 0xfffffef8],0x0
006b1899  MOV EAX,dword ptr [EBP + 0xfffffef8]
006b189f  MOV dword ptr [EBP + 0xffffff60],EAX
006b18a5  MOV dword ptr [EBP + -0x4],0xffffffff
006b18ac  MOV ECX,dword ptr [EBP + 0xffffff60]
006b18b2  MOV dword ptr [0x007948cc],ECX
006b18b8  MOV dword ptr [0x007948d0],0x31260a
006b18c2  MOV dword ptr [0x007948d4],0x5
006b18cc  PUSH 0x8
006b18ce  CALL 0x00686d82
006b18d3  ADD ESP,0x4
006b18d6  MOV dword ptr [EBP + 0xffffff54],EAX
006b18dc  MOV dword ptr [EBP + -0x4],0x13
006b18e3  CMP dword ptr [EBP + 0xffffff54],0x0
006b18ea  JZ 0x006b1901
006b18ec  PUSH 0x1
006b18ee  MOV ECX,dword ptr [EBP + 0xffffff54]
006b18f4  CALL 0x0045ebb0
006b18f9  MOV dword ptr [EBP + 0xfffffef4],EAX
006b18ff  JMP 0x006b190b
006b1901  MOV dword ptr [EBP + 0xfffffef4],0x0
006b190b  MOV EDX,dword ptr [EBP + 0xfffffef4]
006b1911  MOV dword ptr [EBP + 0xffffff58],EDX
006b1917  MOV dword ptr [EBP + -0x4],0xffffffff
006b191e  MOV EAX,dword ptr [EBP + 0xffffff58]
006b1924  MOV [0x007948d8],EAX
006b1929  MOV dword ptr [0x007948dc],0x312dda
006b1933  MOV dword ptr [0x007948e0],0xd
006b193d  PUSH 0x4
006b193f  CALL 0x00686d82
006b1944  ADD ESP,0x4
006b1947  MOV dword ptr [EBP + 0xffffff4c],EAX
006b194d  MOV dword ptr [EBP + -0x4],0x14
006b1954  CMP dword ptr [EBP + 0xffffff4c],0x0
006b195b  JZ 0x006b1970
006b195d  MOV ECX,dword ptr [EBP + 0xffffff4c]
006b1963  CALL 0x005b2400
006b1968  MOV dword ptr [EBP + 0xfffffef0],EAX
006b196e  JMP 0x006b197a
006b1970  MOV dword ptr [EBP + 0xfffffef0],0x0
006b197a  MOV ECX,dword ptr [EBP + 0xfffffef0]
006b1980  MOV dword ptr [EBP + 0xffffff50],ECX
006b1986  MOV dword ptr [EBP + -0x4],0xffffffff
006b198d  MOV EDX,dword ptr [EBP + 0xffffff50]
006b1993  MOV dword ptr [0x007948e4],EDX
006b1999  MOV dword ptr [0x007948e8],0x3129f2
006b19a3  MOV dword ptr [0x007948ec],0x15
006b19ad  PUSH 0x4
006b19af  CALL 0x00686d82
006b19b4  ADD ESP,0x4
006b19b7  MOV dword ptr [EBP + 0xffffff44],EAX
006b19bd  MOV dword ptr [EBP + -0x4],0x15
006b19c4  CMP dword ptr [EBP + 0xffffff44],0x0
006b19cb  JZ 0x006b19e0
006b19cd  MOV ECX,dword ptr [EBP + 0xffffff44]
006b19d3  CALL 0x005c8700
006b19d8  MOV dword ptr [EBP + 0xfffffeec],EAX
006b19de  JMP 0x006b19ea
006b19e0  MOV dword ptr [EBP + 0xfffffeec],0x0
006b19ea  MOV EAX,dword ptr [EBP + 0xfffffeec]
006b19f0  MOV dword ptr [EBP + 0xffffff48],EAX
006b19f6  MOV dword ptr [EBP + -0x4],0xffffffff
006b19fd  MOV ECX,dword ptr [EBP + 0xffffff48]
006b1a03  MOV dword ptr [0x007948f0],ECX
006b1a09  MOV dword ptr [0x007948f4],0x30fb10
006b1a13  MOV ECX,dword ptr [EBP + -0xc]
006b1a16  MOV dword ptr FS:[0x0],ECX
006b1a1d  POP ECX
006b1a1e  MOV ESP,EBP
006b1a20  POP EBP
006b1a21  RET
