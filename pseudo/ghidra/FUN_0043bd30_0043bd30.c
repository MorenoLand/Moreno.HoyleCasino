// FUN_0043bd30  0043bd30

undefined4 * __thiscall FUN_0043bd30(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005f5400();
  switch(uVar1) {
  case 1:
    FUN_0043bd30(param_2,param_3);
    break;
  default:
    uVar1 = *(undefined4 *)(param_1 + 0xf4 + param_3 * 8);
    *param_2 = *(undefined4 *)(param_1 + 0xf0 + param_3 * 8);
    param_2[1] = uVar1;
    break;
  case 3:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x19:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x1a:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x1b:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x1c:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x1d:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x1e:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x25:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x26:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x27:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x28:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x29:
    FUN_0043bd30(param_2,param_3);
    break;
  case 0x2a:
    FUN_0043bd30(param_2,param_3);
  }
  return param_2;
}

