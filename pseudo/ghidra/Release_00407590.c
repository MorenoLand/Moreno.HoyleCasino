// Release  00407590

/* Library Function - Single Match
    public: void __thiscall Concurrency::details::MultiWaitBlockHolder::Release(void)
   
   Library: Visual Studio */

void __thiscall Concurrency::details::MultiWaitBlockHolder::Release(MultiWaitBlockHolder *this)

{
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return;
}

