// FUN_005df440  005df440

undefined4 __thiscall FUN_005df440(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined3 uVar2;
  undefined3 extraout_var;
  
  uVar1 = FUN_00635190(param_2,param_3);
  uVar2 = (undefined3)((uint)uVar1 >> 8);
  if ((*(char *)(param_1 + 0x25) != '\0') && (param_3 == 0x186bf)) {
    FUN_005fe640(0xfffffffe,0);
    FUN_005fe640(0x186c1,0);
    uVar2 = extraout_var;
  }
  return CONCAT31(uVar2,(char)uVar1);
}

