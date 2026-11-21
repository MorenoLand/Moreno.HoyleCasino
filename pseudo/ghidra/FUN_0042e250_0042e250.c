// FUN_0042e250  0042e250

/* WARNING: Removing unreachable block (ram,0x0042e348) */
/* WARNING: Removing unreachable block (ram,0x0042e3cc) */
/* WARNING: Removing unreachable block (ram,0x0042e40e) */
/* WARNING: Removing unreachable block (ram,0x0042e38a) */
/* WARNING: Removing unreachable block (ram,0x0042e306) */
/* WARNING: Removing unreachable block (ram,0x0042e44d) */

void __thiscall FUN_0042e250(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(DAT_007906d4 + 0xac4) == 0) {
    FUN_0062fde0("*** Stickman saying DiceOut()\n");
    if ((param_2 != (int *)0x0) && (param_3 != -1)) {
      (**(code **)(*param_2 + 4))(param_3);
    }
    FUN_005cd800(0xd04d,param_2,0);
  }
  else {
    iVar1 = *(int *)(DAT_007906d4 + 0xac4) + -4;
    switch(iVar1) {
    case 0:
      FUN_0062fde0("*** Stickman saying WantFour()\n",iVar1,param_1);
      FUN_005cd800(0xd147,param_2,0);
      break;
    case 1:
      FUN_0062fde0("*** Stickman saying WantFive()\n",iVar1,param_1);
      FUN_005cd800(0xd1ab,param_2,0);
      break;
    case 2:
      FUN_0062fde0("*** Stickman saying WantSix()\n",iVar1,param_1);
      FUN_005cd800(0xd1f6,param_2,0);
      break;
    default:
      FUN_0062fde0("*** Stickman saying DiceOut()\n",iVar1,param_1);
      if ((param_2 != (int *)0x0) && (param_3 != -1)) {
        (**(code **)(*param_2 + 4))(param_3);
      }
      FUN_005cd800(0xd04d,param_2,0);
      break;
    case 4:
      FUN_0062fde0("*** Stickman saying WantEight()\n",iVar1,param_1);
      FUN_005cd800(0xd25a,param_2,0);
      break;
    case 5:
      FUN_0062fde0("*** Stickman saying WantNine()\n",iVar1,param_1);
      FUN_005cd800(0xd2be,param_2,0);
      break;
    case 6:
      FUN_0062fde0("*** Stickman saying WantTen()\n",iVar1,param_1);
      FUN_005cd800(0xd309,param_2,0);
    }
  }
  return;
}

