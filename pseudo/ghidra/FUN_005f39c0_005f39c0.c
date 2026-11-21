// FUN_005f39c0  005f39c0

void __thiscall FUN_005f39c0(int *param_1,char param_2)

{
  char *_Format;
  undefined4 uVar1;
  int iVar2;
  char local_8c [132];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x25) == '\0') {
    if (((char)param_1[9] == '\0') && (param_2 == '\0')) {
      (**(code **)(*param_1 + 0x30))(1);
      _Format = (char *)(**(code **)(*param_1 + 0x24))(&DAT_00795634);
      sprintf(local_8c,_Format);
      uVar1 = (**(code **)(*param_1 + 0x28))(4);
      iVar2 = FUN_0062ff10(local_8c,uVar1);
      if (iVar2 == 6) {
        if (param_1[0xd] == 0x44c) {
          *(undefined1 *)(param_1 + 9) = 1;
        }
        else {
          (**(code **)(*param_1 + 0x34))(0x44c);
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 9) = 1;
    }
    (**(code **)(*param_1 + 0x30))(0);
  }
  else {
    *(undefined1 *)((int)param_1 + 0x26) = 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

