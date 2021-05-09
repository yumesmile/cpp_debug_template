#include <Mahi/Gui.hpp>
#include <Mahi/Util.hpp>

using namespace mahi::gui;

class MyApp : public Application {
public:
	MyApp() : Application() { }
	
	void update() override {
		ImGui::Begin("Example");
		if(ImGui::Button("press")) {
			
		}
		ImGui::End();
	}
};

int main() {
	MyApp app;
	app.run();
	return 0;
}