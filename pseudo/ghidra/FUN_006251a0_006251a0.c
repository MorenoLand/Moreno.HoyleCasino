// FUN_006251a0  006251a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006251a0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  __time64_t _Var4;
  undefined4 extraout_var;
  uint local_c;
  int local_8;
  
  _Var4 = _time64((__time64_t *)&local_c);
  uVar1 = (undefined4)_Var4;
  uVar2 = local_c - _DAT_015eee10;
  iVar3 = (local_8 - _DAT_015eee14) - (uint)(local_c < _DAT_015eee10);
  if ((-1 < iVar3) &&
     ((iVar3 != 0 &&
       SBORROW4(local_8,_DAT_015eee14) ==
       SBORROW4(local_8 - _DAT_015eee14,(uint)(local_c < _DAT_015eee10)) || (900 < uVar2)))) {
    _DAT_015eee10 = local_c;
    _DAT_015eee14 = local_8;
    FUN_0062fde0("Doing routine resource purge.\n",uVar2,iVar3,extraout_var);
    uVar1 = FUN_00625240(0);
  }
  return uVar1;
}

