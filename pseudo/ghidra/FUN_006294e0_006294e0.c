// FUN_006294e0  006294e0

void __thiscall FUN_006294e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 local_40c [1024];
  uint local_c;
  undefined2 local_8;
  undefined1 local_6;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = 0;
  local_6 = 0;
  (**(code **)(*param_1 + 0xe8))(param_2,local_40c);
  cVar1 = FUN_00629080(param_2);
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_0060ca40(param_3);
    iVar3 = FUN_005f53c0(0);
    (**(code **)(*piVar2 + 0xc4))
              (local_40c,param_1[0x2c],CONCAT13(extraout_var,CONCAT12(local_6,local_8)),iVar3 + 2);
  }
  else {
    cVar1 = FUN_00629000(param_2);
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_0060ca40(param_3);
      iVar3 = FUN_005f53c0(0);
      (**(code **)(*piVar2 + 0xc4))
                (local_40c,param_1[0x2a],CONCAT13(extraout_var_00,CONCAT12(local_6,local_8)),
                 iVar3 + 2);
    }
    else {
      piVar2 = (int *)FUN_0060ca40(param_3);
      iVar3 = FUN_005f53c0(1);
      (**(code **)(*piVar2 + 0xc4))
                (local_40c,param_1[0x2b],
                 CONCAT13((char)((uint)(param_1 + 0x2d) >> 0x18),(int3)param_1[0x2d]),iVar3 + 2);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

