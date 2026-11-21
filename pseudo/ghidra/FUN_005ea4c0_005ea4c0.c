// FUN_005ea4c0  005ea4c0

void FUN_005ea4c0(void)

{
  int iVar1;
  undefined8 local_c;
  
  iVar1 = __RTDynamicCast(*(undefined4 *)(DAT_007960d8 + 0x10),0,&VWindow::RTTI_Type_Descriptor,
                          &Window::RTTI_Type_Descriptor,0);
  local_c = FUN_005ea470();
  FUN_005ea400(&local_c);
  local_c._0_4_ = (int)local_c - *(int *)(iVar1 + 0x28);
  local_c._4_4_ = local_c._4_4_ - *(int *)(iVar1 + 0x2c);
  FUN_00630400((int)local_c,local_c._4_4_);
  return;
}

