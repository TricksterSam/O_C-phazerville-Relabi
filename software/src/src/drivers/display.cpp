// Copyright (c) 2016 Patrick Dowling
//
// Author: Patrick Dowling (pld@gurkenkiste.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#include <Arduino.h>
#include "display.h"

weegfx::Graphics graphics;

namespace display {

FrameBuffer<SH1106_128x64_Driver::kFrameSize, 2> frame_buffer;
PagedDisplayDriver<SH1106_128x64_Driver> driver;

void Init() {
  frame_buffer.Init();
  driver.Init();
}

void AdjustOffset(uint8_t offset) {
	SH1106_128x64_Driver::AdjustOffset(offset);
}
void SetFlipMode(bool flip180) {
    SH1106_128x64_Driver::SetFlipMode(flip180);
}
void SetContrast(uint8_t contrast) {
    SH1106_128x64_Driver::SetContrast(contrast);
}

};
