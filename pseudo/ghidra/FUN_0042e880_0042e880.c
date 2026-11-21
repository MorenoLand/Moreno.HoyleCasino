// FUN_0042e880  0042e880

/* WARNING: Removing unreachable block (ram,0x0042e94a) */
/* WARNING: Removing unreachable block (ram,0x0042e9df) */
/* WARNING: Removing unreachable block (ram,0x0042ea9d) */
/* WARNING: Removing unreachable block (ram,0x0042eb5e) */
/* WARNING: Removing unreachable block (ram,0x0042ebdf) */
/* WARNING: Removing unreachable block (ram,0x0042ec9d) */
/* WARNING: Removing unreachable block (ram,0x0042ed5e) */
/* WARNING: Removing unreachable block (ram,0x0042eddf) */
/* WARNING: Removing unreachable block (ram,0x0042ed9d) */
/* WARNING: Removing unreachable block (ram,0x0042ecdf) */
/* WARNING: Removing unreachable block (ram,0x0042ec5e) */
/* WARNING: Removing unreachable block (ram,0x0042eb9d) */
/* WARNING: Removing unreachable block (ram,0x0042eadf) */
/* WARNING: Removing unreachable block (ram,0x0042ea5e) */
/* WARNING: Removing unreachable block (ram,0x0042e9a0) */
/* WARNING: Removing unreachable block (ram,0x0042e90b) */
/* WARNING: Removing unreachable block (ram,0x0042ee35) */

void __thiscall FUN_0042e880(undefined4 param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_007906d4 + 0xacc) + *(int *)(DAT_007906d4 + 0xad0) + -2;
  switch(iVar2) {
  case 0:
    cVar1 = FUN_00436a00(4);
    if (cVar1 == '\0') {
      FUN_0062fde0("*** Stickman saying RollTwo()\n");
      FUN_005cd800(0xd066,param_2,0);
    }
    else {
      FUN_0062fde0("*** Stickman saying ComeBoxLoser()\n");
      FUN_005cd800(0xd0fc,param_2,0);
    }
    break;
  case 1:
    cVar1 = FUN_00436a00(4);
    if (cVar1 == '\0') {
      FUN_0062fde0("*** Stickman saying RollThree()\n");
      FUN_005cd800(0xd098,param_2,0);
    }
    else {
      FUN_0062fde0("*** Stickman saying ComeBoxLoser()\n");
      FUN_005cd800(0xd0fc,param_2,0);
    }
    break;
  case 2:
    if (*(int *)(DAT_007906d4 + 0xacc) == *(int *)(DAT_007906d4 + 0xad0)) {
      FUN_0062fde0("*** Stickman saying HardFour()\n");
      FUN_005cd800(0xd160,param_2,0);
    }
    else {
      FUN_0062fde0("*** Stickman saying RollFour()\n");
      FUN_005cd800(0xd115,param_2,0);
    }
    break;
  case 3:
    FUN_0062fde0("*** Stickman saying RollFive()\n");
    FUN_005cd800(0xd179,param_2,0);
    break;
  case 4:
    if (*(int *)(DAT_007906d4 + 0xacc) == *(int *)(DAT_007906d4 + 0xad0)) {
      FUN_0062fde0("*** Stickman saying HardSix()\n");
      FUN_005cd800(0xd20f,param_2,0);
    }
    else {
      FUN_0062fde0("*** Stickman saying RollSix()\n");
      FUN_005cd800(0xd1c4,param_2,0);
    }
    break;
  case 5:
    FUN_0062fde0("*** Stickman saying SevenOut()\n");
    FUN_005cd800(0xd034,param_2,0);
    break;
  case 6:
    if (*(int *)(DAT_007906d4 + 0xacc) == *(int *)(DAT_007906d4 + 0xad0)) {
      FUN_0062fde0("*** Stickman saying HardEight()\n");
      FUN_005cd800(0xd273,param_2,0);
    }
    else {
      FUN_0062fde0("*** Stickman saying RollEight()\n");
      FUN_005cd800(0xd228,param_2,0);
    }
    break;
  case 7:
    FUN_0062fde0("*** Stickman saying RollNine()\n");
    FUN_005cd800(0xd28c,param_2,0);
    break;
  case 8:
    if (*(int *)(DAT_007906d4 + 0xacc) == *(int *)(DAT_007906d4 + 0xad0)) {
      FUN_0062fde0("*** Stickman saying HardTen()\n");
      FUN_005cd800(0xd322,param_2,0);
    }
    else {
      FUN_0062fde0("*** Stickman saying RollTen()\n");
      FUN_005cd800(0xd2d7,param_2,0);
    }
    break;
  case 9:
    FUN_0062fde0("*** Stickman saying RollEleven()\n");
    FUN_005cd800(0xd33b,param_2,0);
    break;
  case 10:
    cVar1 = FUN_00436a00(4);
    if (cVar1 == '\0') {
      FUN_0042f040(param_2,0xffffffff);
    }
    else {
      FUN_0062fde0("*** Stickman saying ComeBoxLoser()\n");
      FUN_005cd800(0xd0fc,param_2,0);
    }
    break;
  default:
    FUN_005e9f20("false","..\\Casino\\crapsdisplay.cpp",0x711,iVar2,param_1);
    if (param_2 != (int *)0x0) {
      if (param_3 != -1) {
        (**(code **)(*param_2 + 4))(param_3);
      }
      (**(code **)(*param_2 + 0x1c))(0);
    }
  }
  return;
}

