// FUN_0056da30  0056da30

undefined8 * __thiscall FUN_0056da30(int param_1,undefined8 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0064c8a0(0,0);
  uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (999999999 < (int)param_3) {
    FUN_005e9f20("numCredits <= MAX_ROADKILL_CREDITS","..\\Casino\\roadkillslot.cpp",0x15a);
  }
  switch(*(undefined4 *)(param_1 + 0x9c)) {
  case 0:
    uVar3 = CONCAT44(((int)param_3 % 0x14) * 5,(int)param_3 / 0x14);
    break;
  case 1:
    uVar3 = CONCAT44(((int)param_3 % 10) * 10,(int)param_3 / 10);
    break;
  case 2:
    uVar2 = param_3 & 0x80000003;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
    }
    uVar3 = CONCAT44(uVar2 * 0x19,(int)(param_3 + ((int)param_3 >> 0x1f & 3U)) >> 2);
    break;
  case 3:
    uVar3 = CONCAT44(uVar1,param_3);
    break;
  case 4:
    if ((int)param_3 < 200000000) {
      uVar3 = CONCAT44(uVar1,param_3 * 5);
    }
    else {
      uVar3 = CONCAT44(uVar1,1000000000);
    }
    break;
  case 5:
    if ((int)param_3 < 100000000) {
      uVar3 = CONCAT44(uVar1,param_3 * 10);
    }
    else {
      uVar3 = CONCAT44(uVar1,1000000000);
    }
    break;
  case 6:
    if ((int)param_3 < 40000000) {
      uVar3 = CONCAT44(uVar1,param_3 * 0x19);
    }
    else {
      uVar3 = CONCAT44(uVar1,1000000000);
    }
    break;
  case 7:
    if ((int)param_3 < 20000000) {
      uVar3 = CONCAT44(uVar1,param_3 * 0x32);
    }
    else {
      uVar3 = CONCAT44(uVar1,1000000000);
    }
    break;
  case 8:
    if ((int)param_3 < 10000000) {
      uVar3 = CONCAT44(uVar1,param_3 * 100);
    }
    else {
      uVar3 = CONCAT44(uVar1,1000000000);
    }
    break;
  case 9:
    if ((int)param_3 < 10000000) {
      uVar3 = CONCAT44(uVar1,param_3 * 0xfa);
    }
    else {
      uVar3 = CONCAT44(uVar1,1000000000);
    }
    break;
  case 10:
    if ((int)param_3 < 20000000) {
      uVar3 = CONCAT44(uVar1,param_3 * 500);
    }
    else {
      uVar3 = CONCAT44(uVar1,1000000000);
    }
    break;
  case 0xb:
    if ((int)param_3 < 1000000) {
      uVar3 = CONCAT44(uVar1,param_3 * 1000);
    }
    else {
      uVar3 = CONCAT44(uVar1,1000000000);
    }
  }
  *param_2 = uVar3;
  return param_2;
}

