// Copyright 2017 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "starboard/shared/starboard/player/filter/player_components.h"

namespace starboard {
namespace shared {
namespace starboard {
namespace player {
namespace filter {

// static
scoped_ptr<PlayerComponents> PlayerComponents::Create(
    const AudioParameters& audio_parameters,
    const VideoParameters& video_parameters) {
  // TODO: Implement stubs that do something.
  return scoped_ptr<PlayerComponents>(NULL);
}

}  // namespace filter
}  // namespace player
}  // namespace starboard
}  // namespace shared
}  // namespace starboard