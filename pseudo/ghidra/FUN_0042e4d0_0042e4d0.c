// FUN_0042e4d0  0042e4d0

/* WARNING: Removing unreachable block (ram,0x0042e589) */
/* WARNING: Removing unreachable block (ram,0x0042e60d) */
/* WARNING: Removing unreachable block (ram,0x0042e691) */
/* WARNING: Removing unreachable block (ram,0x0042e715) */
/* WARNING: Removing unreachable block (ram,0x0042e799) */
/* WARNING: Removing unreachable block (ram,0x0042e757) */
/* WARNING: Removing unreachable block (ram,0x0042e6d3) */
/* WARNING: Removing unreachable block (ram,0x0042e64f) */
/* WARNING: Removing unreachable block (ram,0x0042e5cb) */
/* WARNING: Removing unreachable block (ram,0x0042e547) */
/* WARNING: Removing unreachable block (ram,0x0042e7db) */

void __thiscall FUN_0042e4d0(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0) + -2;
  switch(iVar1) {
  case 0:
    FUN_0062fde0("*** Stickman saying TwoLoser()\n");
    FUN_005cd800(0xd07f,param_2,0);
    break;
  case 1:
    FUN_0062fde0("*** Stickman saying ThreeLoser()\n");
    FUN_005cd800(0xd0b1,param_2,0);
    break;
  case 2:
    FUN_0062fde0("*** Stickman saying PointIsFour()\n");
    FUN_005cd800(0xd12e,param_2,0);
    break;
  case 3:
    FUN_0062fde0("*** Stickman saying PointIsFive()\n");
    FUN_005cd800(0xd192,param_2,0);
    break;
  case 4:
    FUN_0062fde0("*** Stickman saying PointIsSix()\n");
    FUN_005cd800(0xd1dd,param_2,0);
    break;
  case 5:
    FUN_0062fde0("*** Stickman saying NaturalSeven()\n");
    FUN_005cd800(0xcfb7,param_2,0);
    break;
  case 6:
    FUN_0062fde0("*** Stickman saying PointIsEight()\n");
    FUN_005cd800(0xd241,param_2,0);
    break;
  case 7:
    FUN_0062fde0("*** Stickman saying PointIsNine()\n");
    FUN_005cd800(0xd2a5,param_2,0);
    break;
  case 8:
    FUN_0062fde0("*** Stickman saying PointIsTen()\n");
    FUN_005cd800(54000,param_2,0);
    break;
  case 9:
    FUN_0062fde0("*** Stickman saying NaturalEleven()\n");
    FUN_005cd800(0xcfd0,param_2,0);
    break;
  case 10:
    FUN_0062fde0("*** Stickman saying TwelveLoser()\n");
    FUN_005cd800(0xd0e3,param_2,0);
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\crapsdisplay.cpp",0x6bd,iVar1,param_1);
    if (param_2 != (int *)0x0) {
      if (param_3 != -1) {
        (**(code **)(*param_2 + 4))(param_3);
      }
      (**(code **)(*param_2 + 0x1c))(0);
    }
  }
  return;
}

