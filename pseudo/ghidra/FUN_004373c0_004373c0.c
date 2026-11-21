// FUN_004373c0  004373c0

undefined4 FUN_004373c0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_8;
  
  iVar2 = FUN_0062fbf0(param_2);
  local_8 = iVar2;
  do {
    local_8 = (local_8 + 1) % param_2;
    cVar1 = (**(code **)(param_1 + local_8 * 0x20))();
    if (cVar1 != '\0') {
      (**(code **)(param_1 + 0x10 + local_8 * 0x20))(*(undefined4 *)(DAT_0162ee80 + 4),0xffffffff);
      return 1;
    }
  } while (local_8 != iVar2);
  return 0;
}

